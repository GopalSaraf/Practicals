#pragma once
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

// Definition of the Item struct representing an item to be considered in the
// knapsack problem
struct Item {
    string name;    // Name of the item
    double weight;  // Weight of the item
    double profit;  // Profit (or value) of the item

    // Constructor to initialize an item with the given name, weight, and profit
    Item(string name, double weight, double profit)
        : name(name), weight(weight), profit(profit) {
        itemNo++;
        if (name == "") name = "Item " + to_string(itemNo);
    }

    // Constructor to initialize an item with the given weight and profit (name
    // is set to empty)
    Item(double weight, double profit) : Item("", weight, profit) {}

    // Constructor to initialize an item with the given name (weight and profit
    // are set to 0.0)
    Item(string name) : Item(name, 0.0, 0.0) {}

    // Default constructor to initialize an item with empty values
    Item() : Item("", 0.0, 0.0) {}

    // Calculate the profit per weight ratio of the item
    double profitPerWeight() { return round(profit / weight * 100.0) / 100.0; }

    // Assignment operator to copy the values from another item
    Item& operator=(const Item& other) {
        name = other.name;
        weight = other.weight;
        profit = other.profit;
        return *this;
    }

    // Friend function to allow printing the item's information to an output
    // stream
    friend ostream& operator<<(ostream& os, const Item& item) {
        os << item.name << " (weight: " << item.weight
           << ", profit: " << item.profit << ")";
        return os;
    }

    // Static function to print a list of items in tabular format
    static void printItems(vector<Item> items) {
        // Set the width of each column to the maximum width of the column
        int indexWidth = to_string(items.size()).size() + 3;

        vector<int> widths = colWidths(items);
        int nameWidth = widths[0] + 3;
        int weightWidth = widths[1] + 3;
        int profitWidth = widths[2] + 3;
        int profitPerWeightWidth = widths[3] + 3;

        // Print the header row
        cout << left << setw(indexWidth) << "No."
             << "  |  " << left << setw(nameWidth) << "Name"
             << "  |  " << left << setw(weightWidth) << "Weight"
             << "  |  " << left << setw(profitWidth) << "Profit"
             << "  |  " << left << setw(profitPerWeightWidth)
             << "Profit Per Weight" << endl;

        // Print the separator row
        cout << string((indexWidth), '-') << "--|--" << string((nameWidth), '-')
             << "--|--" << string((weightWidth), '-') << "--|--"
             << string((profitWidth), '-') << "--|--"
             << string((profitPerWeightWidth), '-') << endl;

        // Print the items
        for (int index = 0; index < items.size(); index++) {
            Item item = items[index];

            cout << left << setw(indexWidth) << index + 1 << "  |  " << left
                 << setw(nameWidth) << item.name << "  |  " << left
                 << setw(weightWidth) << item.weight << "  |  " << left
                 << setw(profitWidth) << item.profit << "  |  " << left
                 << setw(profitPerWeightWidth) << item.profitPerWeight()
                 << endl;
        }
    }

   private:
    static inline int itemNo = 0;

    // Helper function to calculate the column widths for the table output
    static vector<int> colWidths(vector<Item> items) {
        // Initialize the widths to 0
        vector<int> widths = {0, 0, 0, 0};

        // Calculate the maximum width for each column
        for (Item item : items) {
            int nameWidth = item.name.size();
            int weightWidth = to_string(item.weight).size();
            int profitWidth = to_string(item.profit).size();
            int profitPerWeightWidth = to_string(item.profitPerWeight()).size();

            widths[0] = max(widths[0], nameWidth);
            widths[1] = max(widths[1], weightWidth);
            widths[2] = max(widths[2], profitWidth);
            widths[3] = max(widths[3], profitPerWeightWidth);
        }

        return widths;
    }
};
