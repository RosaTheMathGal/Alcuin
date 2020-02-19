#include "GraphVertex.h"
#include "Graph.h"
#include <iostream>

int main() {
	GraphVertex node1;
	GraphVertex node2;
	GraphVertex node3("Green");
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
