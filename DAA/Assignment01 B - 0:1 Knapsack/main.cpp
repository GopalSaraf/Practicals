#include <iostream>
#include <vector>

#include "knapsack.h"
#include "item.h"

using namespace std;

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

    Knapsack knapsack(items, capacity);
    knapsack.fillSack();

    knapsack.printTable();

    cout << endl << "Items in the knapsack:" << endl;
    Item::printItems(knapsack.getFilledItems());

    cout << endl << "Total profit: " << knapsack.getProfit() << endl;

    return 0;
}