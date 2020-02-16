#include "GraphNode.h"
#include <iostream>

void GraphNode::AddConnection(GraphNode* connectedNode) {
	if(!connectedNode->originalAdder) {
		connections.push_back(connectedNode);
		originalAdder = true;
		connectedNode->AddConnection(this);
		originalAdder = false;
	}
	else {
		connections.push_back(connectedNode);
	}
}
