#include <iostream>
#include <vector>
#include <iomanip>

#include "knapsack.h"
#include "item.h"

using namespace std;

// Function to demonstrate the use of different knapsack techniques on a given
// set of items and capacity
void useKnapSacks(vector<Item> items, double capacity) {
    vector<Knapsack::Technique> techniques = {
        Knapsack::ProfitPerWeight,
        Knapsack::Profit,
        Knapsack::Weight,
        Knapsack::None,
    };

    vector<double> profits;

    // Loop through each knapsack technique
    for (auto technique : techniques) {
        // Create a Knapsack object with the current technique
        Knapsack knapsack(items, capacity, Knapsack::Fractional, technique);
        cout << "Using technique: " << knapsack.getTechniqueName() << endl
             << endl;

        // Fill the knapsack using the current technique
        knapsack.fillSack();
        vector<Item> filledItems = knapsack.getFilledItems();

        // Print the items present in the knapsack after using the current
        // technique
        cout << "Items in the knapsack:" << endl;
        Item::printItems(filledItems);

        // Print the total profit obtained from the knapsack after using the
        // current technique
        cout << endl << "Total profit: " << knapsack.getProfit() << endl;
        profits.push_back(knapsack.getProfit());

        cout << endl << endl;
    }

    int space = 24;

    // Print the profits obtained using different techniques
    cout << "Profits using different techniques:" << endl;
    cout << left << setw(space) << "Technique"
         << "  |  " << left << setw(space) << "Profit" << endl;
    cout << string(space, '-') << "--|--" << string(space, '-') << endl;

    for (int i = 0; i < techniques.size(); i++) {
        cout << left << setw(space) << Knapsack::getTechniqueName(techniques[i])
             << "  |  " << left << setw(space) << profits[i] << endl;
    }
}

int main() {
    vector<Item> items;
    double capacity;

    // Input the capacity of the knapsack
    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;

    int noOfItems;
    // Input the number of items to be considered
    cout << "Enter the number of items: ";
    cin >> noOfItems;

    cout << "Enter the items in the format <name> <weight> <profit>:" << endl;

    string name;
    double weight, profit;

    // Input the details of each item (name, weight, profit)
    for (int i = 0; i < noOfItems; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> name >> weight >> profit;
        items.push_back(Item(name, weight, profit));
    }

    cout << endl;

    // Call the function to use different knapsack techniques and print the
    // results
    useKnapSacks(items, capacity);

    return 0;
}
