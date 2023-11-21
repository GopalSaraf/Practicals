#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Function to calculate the cost of the current tour
int calculateCost(const vector<vector<int>>& graph, const vector<int>& tour) {
    int cost = 0;
    for (int i = 0; i < tour.size() - 1; ++i) {
        cost += graph[tour[i]][tour[i + 1]];
    }
    cost += graph[tour.back()][tour[0]];  // Return to the starting city
    return cost;
}

// Function to find the minimum cost using Branch and Bound
void tspBranchAndBound(const vector<vector<int>>& graph, vector<int>& tour,
                       vector<bool>& visited, int cost, int& bestCost,
                       vector<int>& bestTour) {
    int n = graph.size();

    // Base case: if all cities are visited
    if (tour.size() == n) {
        int currentCost =
            cost + graph[tour.back()][tour[0]];  // Return to the starting city
        if (currentCost < bestCost) {
            bestCost = currentCost;
            bestTour = tour;
        }
        return;
    }

    // Bound calculation
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int newCost = cost + graph[tour.back()][i];
            if (newCost < bestCost) {
                tour.push_back(i);
                visited[i] = true;

                // Recur for the next level
                tspBranchAndBound(graph, tour, visited, newCost, bestCost,
                                  bestTour);

                // Backtrack
                tour.pop_back();
                visited[i] = false;
            }
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {0, 29, 20, 21},
        {29, 0, 15, 17},
        {20, 15, 0, 28},
        {21, 17, 28, 0},
    };

    int n = graph.size();
    vector<int> tour = {0};  // Starting from city 0
    vector<bool> visited(n, false);
    visited[0] = true;

    int bestCost = INF;
    vector<int> bestTour;

    // Start the Branch and Bound algorithm
    tspBranchAndBound(graph, tour, visited, 0, bestCost, bestTour);

    // Output the result
    cout << "Best TSP tour cost: " << bestCost << endl;
    cout << "Best TSP tour path: ";
    for (int city : bestTour) {
        cout << city << " ";
    }
    cout << endl;

    return 0;
}
