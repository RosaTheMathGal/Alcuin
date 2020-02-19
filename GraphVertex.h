#ifndef GRAPHVERTEX_H
#define GRAPHVERTEX_H

#include <vector>
#include <string>
#include <iostream>

class GraphVertex {
	public:
		GraphVertex() { label = "Just a little node!"; } 
		GraphVertex(std::string label) { this->label = label; }
		~GraphVertex() { std::cout << label << " says goodnight!" << std::endl; } // The cute message is for debug

		void PrintLabel() { std::cout << label << std::endl; }
		std::string GetLabel() const { return label; }
		void SetLabel(std::string label) { this->label = label; }

		std::vector<GraphVertex*> GetConnections()  const { return connections; }
		void AddConnection(GraphVertex* connectedNode);

	private:
		std::string label; // Label is a generic string to encode whatever data you need for a graph/network
		bool originalAdder = false; // Flag to prevent recursion for AddConnection(). See comment at implementation!!
		std::vector<GraphVertex*> connections;

};

#endif
