#include "GraphNode.h"
#include <iostream>

/* All connections should be symetrical. Therefore, whenever a node is added
 * to the collection list, the node node calling the AddConnection() function
 * should be added to the collection list of the other. To avoid infinite
 * recursion, a flag is set so that the add-back will only happen once.
 * */
void GraphNode::AddConnection(GraphNode* connectedNode) {
	if(!connectedNode->originalAdder) {
		originalAdder = true;

		connections.push_back(connectedNode);
		connectedNode->AddConnection(this);

		originalAdder = false; // Make sure to set the flag back to false!!
	}
	else {
		connections.push_back(connectedNode);
	}
}
