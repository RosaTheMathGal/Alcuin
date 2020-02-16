main.o: main.cpp GraphNode.o Graph.o
	g++ main.cpp GraphNode.o Graph.o -o main.o

GraphNode.o: GraphNode.cpp GraphNode.h
	g++ -c GraphNode.cpp

Graph.o: Graph.cpp Graph.h
	g++ -c Graph.cpp

clean: 
	rm *.{o,gch}; rm error.txt
