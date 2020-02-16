#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <vector>
#include <string>
#include <iostream>

class GraphNode {
	public:
		GraphNode() { label = "Just a little node!"; }
		GraphNode(std::string label) { this->label = label; }
		~GraphNode() { std::cout << label << " says goodnight!" << std::endl; }

		void PrintLabel() { std::cout << label << std::endl; }
		std::string GetLabel() const { return label; }
		void SetLabel(std::string label) { this->label = label; }

		std::vector<GraphNode*> GetConnections()  const { return connections; }
		void AddConnection(GraphNode* connectedNode);

	private:
		std::string label;
		bool originalAdder = false;
		std::vector<GraphNode*> connections;

};

#endif
