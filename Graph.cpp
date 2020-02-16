#include "Graph.h"
#include <iostream>

/* First, AddNode() checks to see if the vertex is part of the graph already. If
 * it is not, it then adds the vertex and all the verticies that vertex
 * has an edge with. Note, when connecting two verticies, you should always use
 * the graph-provided function, which verifies that both verticies are actually
 * part of the graph. Adding an edge between a vertex not in the graph and a
 * vertex in the graph will cause duplications of values if you try to add the
 * first vertex into the graph. If needed, you can use the GraphClean() function,
 * but it's very intensive!
 * */
void Graph::AddNode(GraphNode* node) {
	for(int i = 0; i < verticies.size(); ++i) {
		if(node == verticies.at(i)) return;
	}
	verticies.push_back(node);
	for(int i = 0; i < node->GetConnections().size(); ++i) {
		verticies.push_back(node->GetConnections().at(i));
	}
}

/* First, checks to make sure that both nodes are part of the graph; it returns
 * an error if they needed to be added to the graph. Since adding edges is
 * symetric, only one node needs to add the other.
 * */
void Graph::ConnectVerticies(GraphNode* node1, GraphNode* node2) {
	bool node1IsInGraph = false;
	bool node2IsInGraph = false;
	for(int i = 0; i < verticies.size(); ++i) {
		if(node1 == verticies.at(i)) {
			node1IsInGraph = true;
		}
		if (node2 == verticies.at(i)) {
			node2IsInGraph = true;
		}
	}
	if(!(node1IsInGraph && node2IsInGraph)) return;
	node1->AddConnection(node2);
}

void Graph::PrintGraph() {
	for(int i = 0; i < verticies.size(); ++i) {
		GraphNode* vertex = verticies.at(i);
		vertex->PrintLabel();
	}
}

void Graph::CleanGraph() {
	for(int i = 0; i < verticies.size(); ++i) {
		for(int j = i + 1; j < verticies.size() - i - 1; ++j) {
			if(verticies.at(i) == verticies.at(j)) verticies.erase(verticies.begin()+j);
		}
	}
}
