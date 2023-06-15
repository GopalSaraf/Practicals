#include <bits/stdc++.h>
using namespace std;

class Graph {
   private:
    int **adjMatrix;
    int numVertices;

   public:
    // Initialize the matrix to zero
    Graph(int numVertices) {
        this->numVertices = numVertices;
        adjMatrix = new int *[numVertices];
        for (int i = 0; i < numVertices; i++) {
            adjMatrix[i] = new int[numVertices];
            for (int j = 0; j < numVertices; j++) adjMatrix[i][j] = 0;
        }
    }

    // Add edges
    void addEdge(int ver1, int ver2, int weight) {
        // As this is undirected weighted graph,
        // we have to update both vertex with given weight
        adjMatrix[ver1][ver2] = weight;
        adjMatrix[ver2][ver1] = weight;
    }

    // Remove edges
    void removeEdge(int ver1, int ver2) {
        adjMatrix[ver1][ver2] = 0;
        adjMatrix[ver2][ver1] = 0;
    }

    void primsAlgo() {
        // create a array to track selected vertex
        // selected will become true otherwise false
        int selected[numVertices];

        // set selected false initially
        memset(selected, false, sizeof(selected));

        // choose 0th vertex and make it true
        selected[0] = true;

        // Variable to store total weight of tree
        int totalWeight = 0;

        // print for edge and weight
        cout << endl;
        cout << "Edges in the minimum spanning tree :" << endl;
        cout << endl;
        cout << "Edge  : Weight" << endl;

        // the number of egde in minimum spanning tree will be always
        // less than (V - 1), where V is number of vertices in graph
        for (int edgeNo = 0; edgeNo < numVertices - 1; edgeNo++) {
            int min = INT_MAX;
            int x;  //  row number
            int y;  //  col number

            for (int i = 0; i < numVertices; i++) {
                if (selected[i]) {
                    for (int j = 0; j < numVertices; j++) {
                        if (!selected[j] &&          // not in selected
                            adjMatrix[i][j] != 0) {  // there is an edge
                            if (min >
                                adjMatrix[i][j]) {  // If new weight is small
                                                    // than current min
                                min = adjMatrix[i]
                                               [j];  // Update min to new weight
                                x = i;               // Store row in x
                                y = j;               // Store col in y
                            }
                        }
                    }
                }
            }
            cout << x << " - " << y << " :  " << adjMatrix[x][y] << endl;
            selected[y] = true;
            totalWeight += adjMatrix[x][y];
        }
        cout << endl
             << "Total weight of minimum spanning tree : " << totalWeight
             << endl;
    }

    // Print the martix
    void print() {
        for (int i = 0; i < numVertices; i++) {
            cout << i << " : ";
            for (int j = 0; j < numVertices; j++)
                cout << adjMatrix[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }

    ~Graph() {
        for (int i = 0; i < numVertices; i++) delete[] adjMatrix[i];
        delete[] adjMatrix;
    }
};

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

    Graph graph(6);

    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 2);
    graph.addEdge(2, 3, 3);
    graph.addEdge(2, 4, 2);
    graph.addEdge(2, 5, 4);
    graph.addEdge(3, 5, 3);
    graph.addEdge(4, 5, 3);

    graph.primsAlgo();
}