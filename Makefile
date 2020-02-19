main.o: main.cpp GraphVertex.o Graph.o
	g++ main.cpp GraphVertex.o Graph.o -o main.o

GraphVertex.o: GraphVertex.cpp GraphVertex.h
	g++ -c GraphVertex.cpp

Graph.o: Graph.cpp Graph.h
	g++ -c Graph.cpp

clean: 
	rm *.o
