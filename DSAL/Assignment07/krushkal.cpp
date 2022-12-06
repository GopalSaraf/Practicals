#include <bits/stdc++.h>
using namespace std;

// disjoint set data structure
class DisJointSet {
    int* parent;

   public:
    DisJointSet(int n) {
        parent = new int[n];

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    // Find function
    int find(int i) {
        if (parent[i] == i) return i;

        return parent[i] = find(parent[i]);
    }

    // Union function
    void unite(int x, int y) {
        int s1 = find(x);
        int s2 = find(y);

        if (s1 != s2) {
            parent[s2] = s1;
        }
    }
};

class Graph {
    vector<vector<int> > edgelist;
    int V;

   public:
    Graph(int V) { this->V = V; }

    void addEdge(int x, int y, int w) { edgelist.push_back({w, x, y}); }

    void kruskalsalgo() {
        // 1. Sort all edges
        sort(edgelist.begin(), edgelist.end());

        // Initialize the disjoint set
        DisJointSet s(V);
        int ans = 0;
        cout << "Edges in the minimum spanning tree :" << endl;
        cout << endl;
        cout << "Edge  : Weight" << endl;

        for (auto edge : edgelist) {
            int weight = edge[0];
            int firstvertex = edge[1];
            int secondvertex = edge[2];

            // Take this edge if it does not form a cycle
            if (s.find(firstvertex) != s.find(secondvertex)) {
                ans += weight;
                s.unite(firstvertex, secondvertex);
                cout << firstvertex << " - " << secondvertex
                     << " : " << weight << endl;
            }
        }
        cout << endl;
        cout << "Total weight of minimum spanning tree : " << ans << endl << endl;
    }
};

// Driver's code
int main() {
    /*
    Graph :

    0               3
    | \           /   \
    |   \4      /3      \3
    |     \   /      4    \
    |4      2  -----------  5
    |     /   \           /
    |   /2      \2      /3
    | /           \   /
    1               4

    */

    // creating a graph
    Graph graph(6);

    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 2);
    graph.addEdge(2, 3, 3);
    graph.addEdge(2, 4, 2);
    graph.addEdge(2, 5, 4);
    graph.addEdge(3, 5, 3);
    graph.addEdge(4, 5, 3);

    // Function call
    graph.kruskalsalgo();
}