main.o: main.cpp GraphNode.o
	g++ main.cpp GraphNode.o -o main.o

GraphNode.o: GraphNode.cpp GraphNode.h
	g++ -c GraphNode.cpp GraphNode.h

clean: 
	rm *.o
