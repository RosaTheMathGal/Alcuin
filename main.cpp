#include "GraphNode.h"
#include <iostream>

int main() {
	GraphNode node1;
	GraphNode node2;

	node1.AddConnection(&node2);

	node1.GetConnections().at(0)->SayName();
	node2.GetConnections().at(0)->SayName();

	return 0;
}
