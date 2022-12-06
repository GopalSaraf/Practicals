#include <bits/stdc++.h>
using namespace std;

// Function to back trace the path
string getPath(vector<int> paths, int source, int dest) {
    // path will store path from source to dest
    // nodes will store all nodes in path
    string path, nodes;

    // Variable to store current vertex
    int currVertex = dest;
    while (currVertex != source) {
        // We have to store prev node (ie from which node we found current node) in nodes
        nodes = to_string(paths[currVertex]) + nodes;

        // Updating current node
        currVertex = paths[currVertex];
    }
    
    for (char node : nodes) {
        path += node;
        path += " - ";
    }

    // Adding dest node in path
    path += to_string(dest);
    return path;
}

int main() {
    int numVertices = 5;
    int source = 5;
    vector<pair<int, int>> graph[numVertices + 1]; // assuming 1 based indexing of graph

    /*
    Graph :

          2            5
    1 ------------ 2 ----- 5
     \             |     /
       \1          |4  /10
         \     3   | /
           4 ----- 3

    */

    // Constructing the graph
    graph[1].push_back({2, 2});
    graph[1].push_back({4, 1});

    graph[2].push_back({1, 2});
    graph[2].push_back({5, 5});
    graph[2].push_back({3, 4});

    graph[3].push_back({2, 4});
    graph[3].push_back({4, 3});
    graph[3].push_back({5, 10});

    graph[4].push_back({1, 1});
    graph[4].push_back({3, 3});

    graph[5].push_back({2, 5});
    graph[5].push_back({3, 10});

    // Dijkstra's algorithm begins from here
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>> pq;

    // array to back trace shortest paths
    vector<int> paths(numVertices + 1, source);

    // 1-indexed array for calculating shortest paths
    vector<int> distTo(numVertices + 1, INT_MAX);

    distTo[source] = 0;

    pq.push(make_pair(0, source)); // (dist,source)

    while (!pq.empty()) {
        int dist = pq.top().first;   // First value is distance from the source
        int prev = pq.top().second;  // Second value is the node 
        pq.pop();

        for (auto edge : graph[prev]) {
            // edge will give pair of node and weight
            int next = edge.first;
            int nextDist = edge.second;
            cout << "Compairing from " << prev << " to " << next
                 << " --> distances : " << distTo[next] << " and " << dist + nextDist << endl;

            // if distance in distance array is bigger than what we are calculating,
            // we have to update distance in the array
            if (distTo[next] > dist + nextDist) {
                cout << "FOUND SHORTER PATH" << endl;

                // Updating distance in distance array
                distTo[next] = distTo[prev] + nextDist;

                // Adding new pair (dist, node) in queue
                pq.push(make_pair(distTo[next], next));

                // We got shorter path
                // We are reaching next node from prev node
                paths[next] = prev;
            }
        }
    }

    cout << endl;
    cout << "The distances from source " << source << " are : " << endl;
    for (int dest = 1; dest <= numVertices; dest++) {
        cout << source << " --> " << dest << "  Distance : " << distTo[dest];
        cout << "  Path : " << getPath(paths, source, dest) << endl;
    }

    return 0;
}