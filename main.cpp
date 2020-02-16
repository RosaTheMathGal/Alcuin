#include "GraphNode.h"
#include "Graph.h"
#include <iostream>

int main() {
	GraphNode node1;
	GraphNode node2;

	node1.AddConnection(&node2);

	node1.GetConnections().at(0)->PrintLabel();
	node2.GetConnections().at(0)->PrintLabel();

	node1.SetLabel("Red");
	node2.SetLabel("Blue");

	node1.GetConnections().at(0)->PrintLabel();
	node2.GetConnections().at(0)->PrintLabel();
	
	Graph graph1;
	graph1.PrintGraph();

	node1.SetLabel("1");
	node2.SetLabel("-1");

	graph1.AddNode(&node1);
	graph1.PrintGraph();

	return 0;
}
