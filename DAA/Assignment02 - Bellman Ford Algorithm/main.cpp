#include <iostream>

#include "graph.h"
#include "bellmanFord.h"

using namespace std;

int main() {
    Graph graph;

    int edgeCount;
    cout << "Enter number of edges : ";
    cin >> edgeCount;

    cout << "Enter edges in the format <source> <destination> <weight> : "
         << endl;

    for (int i = 0; i < edgeCount; i++) {
        string source, destination;
        int weight;

        cout << "Edge " << i + 1 << " : ";
        cin >> source >> destination >> weight;
        graph.addEdge(source, destination, weight);
    }

    cout << endl;
    graph.print();
    cout << endl;

    string source;
    cout << "Enter source vertex : ";
    cin >> source;

    BellmanFord bellmanFord(graph, source);
    bellmanFord.run();
    cout << endl;
    bellmanFord.printPaths();

    return 0;
}
