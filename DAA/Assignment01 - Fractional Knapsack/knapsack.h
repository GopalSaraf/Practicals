#pragma once
#include <vector>

#include "item.h"
#include "sort.h"

using namespace std;

class Knapsack {
    const vector<Item>& items;
    double capacity;

    int noOfItems;
    vector<Item> filledItems;
    double profit;

   public:
    Knapsack(const vector<Item>& items, double capacity)
        : items(items), capacity(capacity) {
        noOfItems = items.size();
        profit = 0.0f;

        for (Item item : items) filledItems.push_back(Item(item.name));
    }

    void fillSack() {
        vector<Item> sortedItems = sortItems(items);

        int i = 0;
        while (i < noOfItems && capacity > 0) {
            if (sortedItems[i].weight <= capacity) {
                filledItems[i] = sortedItems[i];
                capacity -= sortedItems[i].weight;
                profit += sortedItems[i].profit;
            } else {
                filledItems[i] = Item(
                    sortedItems[i].name, capacity,
                    sortedItems[i].profit * capacity / sortedItems[i].weight);
                profit += sortedItems[i].profitPerWeight() * capacity;
                capacity = 0;
            }

            i++;
        }
    }

    vector<Item> getFilledItems() {
        vector<Item> presentItems;
        for (Item item : filledItems)
            if (item.weight > 0) presentItems.push_back(item);

        return presentItems;
    }

    double getProfit() { return profit; }

   private:
    vector<Item> sortItems(const vector<Item>& items) {
        auto cmp = [](Item a, Item b) {
            return a.profitPerWeight() > b.profitPerWeight();
        };

        return Sort<Item>::sort(items, cmp);
    }
};
