#pragma once
#include <vector>

#include "item.h"

using namespace std;

// Definition of the Knapsack class for solving the knapsack problem
class Knapsack {
    const vector<Item>& items;  // List of items to be considered
    double capacity;            // Capacity of the knapsack

    vector<vector<double>> table;  // Table to store the intermediate results

   public:
    // Constructor to initialize the Knapsack object with the given list of
    // items and capacity
    Knapsack(const vector<Item>& items, double capacity)
        : items(items), capacity(capacity) {
        // Initialize the table with the given number of rows and columns
        table.resize(items.size() + 1);
        for (int i = 0; i < table.size(); i++) {
            table[i].resize(capacity + 1);
        }
    }

    // Fill the knapsack with the items to maximize the profit
    void fillSack() {
        // Fill the table with the intermediate results
        for (int i = 0; i <= items.size(); i++) {
            for (int j = 0; j <= capacity; j++) {
                if (i == 0 || j == 0) {
                    // Fill the first row and column with 0
                    table[i][j] = 0;
                } else if (items[i - 1].weight <= j) {
                    // If the current item's weight is less than or equal to the
                    // current capacity, then the maximum profit is the maximum
                    // of the following two values:
                    // 1. The profit of the current item plus the maximum profit
                    //    obtained by considering the remaining items and the
                    //    remaining capacity
                    // 2. The maximum profit obtained by considering the
                    //    remaining items and the current capacity

                    table[i][j] = max(items[i - 1].profit +
                                          table[i - 1][j - items[i - 1].weight],
                                      table[i - 1][j]);
                } else {
                    // If the current item's weight is greater than the
                    // current capacity, then the maximum profit is the
                    // maximum profit obtained by considering the remaining
                    // items and the current capacity
                    table[i][j] = table[i - 1][j];
                }
            }
        }
    }

    // Get the list of items that are filled in the knapsack
    vector<Item> getFilledItems() {
        vector<Item> filledItems;  // List of items that are filled in the
                                   // knapsack
        int i = items.size();      // Index of the last item
        int j = capacity;          // Remaining capacity

        // Traverse the table from the bottom right corner to the top left
        // corner
        while (i > 0 && j > 0) {
            if (table[i][j] != table[i - 1][j]) {
                // If the current cell's value is not equal to the value of the
                // cell above it, then the current item is filled in the
                // knapsack
                filledItems.push_back(items[i - 1]);
                j -= items[i - 1].weight;
            }
            i--;
        }

        return filledItems;
    }

    // Get the maximum profit obtained by filling the knapsack
    double getProfit() { return table[items.size()][capacity]; }

    // Print the table in tabular format
    static void printTable(vector<vector<double>> table) {
        cout << "Table:" << endl;
        // Print the header row
        cout << setw(5) << "i/j"
             << " ";
        for (int j = 0; j < table[0].size(); j++) {
            cout << setw(5) << j << " ";
        }
        cout << endl;

        // Print the separator row
        cout << string(5, '-') << " ";
        for (int j = 0; j < table[0].size(); j++) {
            cout << string(5, '-') << " ";
        }
        cout << endl;

        // Print the table
        for (int i = 0; i < table.size(); i++) {
            cout << setw(5) << i << " ";
            for (int j = 0; j < table[i].size(); j++) {
                cout << setw(5) << table[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Print the table in tabular format
    void printTable() { printTable(table); }
};