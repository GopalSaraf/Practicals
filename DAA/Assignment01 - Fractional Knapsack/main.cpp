#include <iostream>
#include <vector>
#include <iomanip>

#include "knapsack.h"
#include "item.h"

using namespace std;

void useKnapSacks(vector<Item> items, double capacity) {
    vector<Knapsack::Technique> techniques = {
        Knapsack::ProfitPerWeight,
        Knapsack::Profit,
        Knapsack::Weight,
        Knapsack::None,
    };

    vector<double> profits;

    for (auto technique : techniques) {
        Knapsack knapsack(items, capacity, Knapsack::Fractional, technique);
        cout << "Using technique: " << knapsack.getTechnique() << endl << endl;
        knapsack.fillSack();
        vector<Item> filledItems = knapsack.getFilledItems();

        cout << "Items in the knapsack:" << endl;
        Item::printItems(filledItems);

        cout << endl << "Total profit: " << knapsack.getProfit() << endl;
        profits.push_back(knapsack.getProfit());

        cout << endl << endl;
    }

    int space = 24;

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

    cout << endl;

    useKnapSacks(items, capacity);

    return 0;
}