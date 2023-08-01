#pragma once
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

struct Item {
    string name;
    double weight;
    double profit;

    Item(string name, double weight, double profit)
        : name(name), weight(weight), profit(profit) {
        itemNo++;
        if (name == "") name = "Item " + to_string(itemNo);
    }

    Item(double weight, double profit) : Item("", weight, profit) {}

    Item(string name) : Item(name, 0.0, 0.0) {}

    Item() : Item("", 0.0, 0.0) {}

    double profitPerWeight() { return round(profit / weight * 100.0) / 100.0; }

    Item& operator=(const Item& other) {
        name = other.name;
        weight = other.weight;
        profit = other.profit;
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Item& item) {
        os << item.name << " (weight: " << item.weight
           << ", profit: " << item.profit << ")";
        return os;
    }

    static void printItems(vector<Item> items) {
        int indexWidth = to_string(items.size()).size() + 3;
        int nameWidth = getColWidth(items, "Name");
        int weightWidth = getColWidth(items, "Weight");
        int profitWidth = getColWidth(items, "Profit");
        int profitPerWeightWidth = getColWidth(items, "Profit Per Weight");

        cout << left << setw(indexWidth) << "No."
             << "  |  " << left << setw(nameWidth) << "Name"
             << "  |  " << left << setw(weightWidth) << "Weight"
             << "  |  " << left << setw(profitWidth) << "Profit"
             << "  |  " << left << setw(profitPerWeightWidth)
             << "Profit Per Weight" << endl;

        cout << string((indexWidth), '-') << "--|--" << string((nameWidth), '-')
             << "--|--" << string((weightWidth), '-') << "--|--"
             << string((profitWidth), '-') << "--|--"
             << string((profitPerWeightWidth), '-') << endl;

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

    static int getColWidth(vector<Item> items, string colName) {
        int colWidth = colName.size();

        if (colName == "Name") {
            for (Item item : items) {
                int nameWidth = item.name.size();
                colWidth = max(colWidth, nameWidth);
            }
        } else if (colName == "Profit" || colName == "Weight" ||
                   colName == "Profit Per Weight") {
            for (Item item : items) {
                double col;
                if (colName == "Profit")
                    col = item.profit;
                else if (colName == "Weight")
                    col = item.weight;
                else
                    col = item.profitPerWeight();

                int profitWidth = to_string(col).size();
                colWidth = max(colWidth, profitWidth);
            }
        }

        return colWidth + 2;
    }
};
