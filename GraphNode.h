#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <vector>
#include <string>
#include <iostream>

class GraphNode {
	public:
		GraphNode();
		~GraphNode();
		void AddConnection(GraphNode* connectedNode);
		std::vector<GraphNode*> GetConnections()  const { return connections; }
		void SayName() { std::cout << label << std::endl; }

	private:
		std::string label;
		bool originalAdder = false;
		std::vector<GraphNode*> connections;

};

#endif
