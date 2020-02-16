#ifndef GRAPH_H
#define GRAPH_H

#include "GraphNode.h"
#include <vector> // Yes, should be unnecessary

class Graph {
	public:
		Graph() {}
		~Graph() {}

		std::vector<GraphNode*> GetVerticies() const { return verticies; }

		void AddNode(GraphNode* node);
		void ConnectVerticies(GraphNode* node1, GraphNode* node2);
		void PrintGraph();
		void CleanGraph();

	private:
		std::vector<GraphNode*> verticies;
};

#endif
