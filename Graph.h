#ifndef GRAPH_H
#define GRAPH_H

#include "GraphVertex.h"
#include <vector> // Yes, should be unnecessary

class Graph {
	public:
		Graph() {}
		~Graph() {}

		std::vector<GraphVertex*> GetVerticies() const { return verticies; }

		void AddNode(GraphVertex* node);
		void ConnectVerticies(GraphVertex* node1, GraphVertex* node2);
		void PrintGraph();
		void CleanGraph();

	private:
		std::vector<GraphVertex*> verticies;
};

#endif
