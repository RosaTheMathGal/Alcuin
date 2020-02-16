#include "GraphNode.h"
#include <iostream>

GraphNode::GraphNode() {
	label = "Just a little node!";
}

GraphNode::~GraphNode() {
	std::cout << label << " is saying goodnight!" << std::endl;
}

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
