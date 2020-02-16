#include "GraphNode.h"
#include "Graph.h"
#include <iostream>

int main() {
	GraphNode node1;
	GraphNode node2;
	GraphNode node3("Green");
	node1.SetLabel("Red");
	node2.SetLabel("Blue");
	node1.AddConnection(&node2);

	Graph graph1;
	graph1.AddNode(&node2);
	graph1.AddNode(&node3);
	graph1.PrintGraph();
	graph1.ConnectVerticies(&node1, &node3);

	return 0;
}
