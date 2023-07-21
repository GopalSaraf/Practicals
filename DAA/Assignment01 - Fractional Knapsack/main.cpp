#include <iostream>
#include <vector>

#include "knapsack.h"
#include "item.h"

using namespace std;

int main() {
    vector<Item> items;
    double capacity;

    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;

    int noOfItems;
    cout << "Enter the number of items: ";
    cin >> noOfItems;

    cout << "Enter the items in the format <name> <weight> <profit>:" << endl;

    string name;
    double weight, profit;

    for (int i = 0; i < noOfItems; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> name >> weight >> profit;
        items.push_back(Item(name, weight, profit));
    }

    Knapsack knapsack(items, capacity);
    knapsack.fillSack();

    cout << endl << "Items in the knapsack:" << endl;
    for (Item item : knapsack.getFilledItems()) cout << item << endl;

    cout << endl << "Total profit: " << knapsack.getProfit() << endl;

    return 0;
}