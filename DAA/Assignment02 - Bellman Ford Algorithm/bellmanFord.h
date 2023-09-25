#pragma once

#include <vector>
#include <iostream>

#include "graph.h"

using namespace std;

class BellmanFord {
    Graph graph;
    int source;
    vector<int> distances;
    vector<int> paths;

   public:
    BellmanFord(Graph graph, string source) : graph(graph) {
        this->source = graph.getVertexIndex(source);
        distances = vector<int>(graph.getVertexCount(), INT_MAX);
        distances[this->source] = 0;
        paths = vector<int>(graph.getVertexCount(), -1);
    }

    void run() {
        for (int i = 0; i < graph.getVertexCount() - 1; i++) {
            for (Edge edge : graph.getEdges()) {
                relax(edge.source, edge.destination);
            }
        }
    }

    vector<int> getDistances() { return distances; }

    void printPaths() {
        cout << "Paths and distances from " << graph.getVertex(source) << " :"
             << endl;
        for (int i = 0; i < graph.getVertexCount(); i++) {
            cout << graph.getVertex(source) << " --> " << graph.getVertex(i)
                 << "\t Distance : " << distances[i] << "\t " << printPath(i)
                 << endl;
        }
    }

   private:
    void relax(string source, string destination) {
        int sourceIndex = graph.getVertexIndex(source);
        int destinationIndex = graph.getVertexIndex(destination);
        int weight = graph.getWeight(sourceIndex, destinationIndex);

        if (distances[sourceIndex] != INT_MAX &&
            distances[sourceIndex] + weight < distances[destinationIndex]) {
            distances[destinationIndex] = distances[sourceIndex] + weight;
            paths[destinationIndex] = sourceIndex;
        }
    }

    vector<string> getPath(int destination) {
        vector<int> path;
        int current = destination;

        while (current != source) {
            path.push_back(current);
            current = paths[current];
        }

        path.push_back(source);
        reverse(path.begin(), path.end());

        vector<string> pathString;

        for (int vertex : path) {
            pathString.push_back(graph.getVertex(vertex));
        }

        return pathString;
    }

    string printPath(int destination) {
        vector<string> path = getPath(destination);

        cout << "Path : ";
        for (int i = 0; i < path.size(); i++) {
            cout << path[i];
            if (i != path.size() - 1) {
                cout << " - ";
            }
        }

        return "";
    }
};