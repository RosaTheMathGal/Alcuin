#include "GraphNode.h"
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

	return 0;
}
