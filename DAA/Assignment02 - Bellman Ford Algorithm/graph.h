#pragma once

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct Edge {
    string source, destination;
    int weight;

    Edge(string source, string destination, int weight)
        : source(source), destination(destination), weight(weight) {}
};

class Graph {
    vector<Edge> edges;
    vector<string> vertices;

    unordered_map<string, int> vertexMap;

   public:
    Graph() {}

    void addEdge(string source, string destination, int weight) {
        edges.push_back(Edge(source, destination, weight));
        addVertex(source);
        addVertex(destination);
    }

    vector<Edge> getEdges() { return edges; }

    vector<string> getVertices() { return vertices; }

    int getVertexCount() { return vertices.size(); }

    int getEdgeCount() { return edges.size(); }

    string getVertex(int index) { return vertices[index]; }

    int getVertexIndex(string vertex) {
        return vertexMap.find(vertex) != vertexMap.end() ? vertexMap[vertex]
                                                         : -1;
    }

    int getWeight(string source, string destination) {
        for (Edge edge : edges) {
            if (edge.source == source && edge.destination == destination) {
                return edge.weight;
            }
        }
        return 0;
    }

    int getWeight(int source, int destination) {
        return getWeight(vertices[source], vertices[destination]);
    }

    void print() {
        cout << "Graph:" << endl;
        cout << "Vertices: ";
        for (string vertex : vertices) {
            cout << vertex << " ";
        }
        cout << endl;

        cout << "Edges: ";
        for (Edge edge : edges) {
            cout << "(" << edge.source << ", " << edge.destination << ", "
                 << edge.weight << ") ";
        }
        cout << endl;
    }

   private:
    void addVertex(string vertex) {
        if (find(vertices.begin(), vertices.end(), vertex) == vertices.end()) {
            vertices.push_back(vertex);
            vertexMap[vertex] = vertices.size() - 1;
        }
    }
};