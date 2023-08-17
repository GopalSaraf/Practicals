#pragma once
#include <vector>

#include "item.h"
#include "sort.h"

using namespace std;

// Definition of the Knapsack class for solving the knapsack problem
class Knapsack {
   public:
    enum Type {
        Fractional,  // Fractional Knapsack (items can be taken partially)
        Zero_One,  // 0/1 Knapsack (items can only be taken completely or not at
                   // all)
    };

    enum Technique {
        ProfitPerWeight,  // Technique based on profit per weight ratio
        Profit,           // Technique based on profit only
        Weight,           // Technique based on weight only
        None,             // No specific technique (uses first-come-first-serve)
    };

   private:
    const vector<Item>& items;  // Reference to the list of available items
    double capacity;            // Capacity of the knapsack

    Type type;            // Type of the knapsack (Fractional or Zero_One)
    Technique technique;  // Chosen technique to solve the knapsack problem

    int noOfItems;             // Total number of items available
    vector<Item> filledItems;  // List of items that are filled in the knapsack
    double profit;             // Total profit obtained in the knapsack

   public:
    // Constructor to initialize the Knapsack with the items, capacity, and
    // optional type and technique
    Knapsack(const vector<Item>& items, double capacity,
             Type type = Type::Fractional,
             Technique technique = Technique::ProfitPerWeight)
        : items(items), capacity(capacity), type(type), technique(technique) {
        noOfItems = items.size();
        profit = 0.0f;
    }

    // Method to fill the knapsack with the selected items based on the chosen
    // technique
    void fillSack() {
        // First, sort the items based on the chosen technique
        vector<Item> sortedItems = sortItems();

        double _capacity = this->capacity;

        int i = 0;
        while (i < noOfItems && _capacity > 0) {
            // Check if the current item can be fully added to the knapsack
            if (sortedItems[i].weight <= _capacity) {
                filledItems.push_back(sortedItems[i]);
                _capacity -= sortedItems[i].weight;
                profit += sortedItems[i].profit;
            } else {
                // If the current item cannot be fully added, handle fractional
                // knapsack
                if (type == Type::Fractional) {
                    filledItems.push_back(
                        Item(sortedItems[i].name, _capacity,
                             sortedItems[i].profit * _capacity /
                                 sortedItems[i].weight));
                    profit += sortedItems[i].profitPerWeight() * _capacity;
                }
                _capacity = 0;
            }

            i++;
        }
    }

    // Get the items filled in the knapsack
    vector<Item> getFilledItems() { return filledItems; }

    // Get the total profit in the knapsack
    double getProfit() { return round(profit * 100.0) / 100.0; }

    // Static method to get the name of a Technique enum value as a string
    static string getTechniqueName(Technique technique) {
        switch (technique) {
            case Technique::ProfitPerWeight:
                return "Profit Per Weight";
            case Technique::Profit:
                return "Profit";
            case Technique::Weight:
                return "Weight";
            case Technique::None:
            default:
                return "First Come First Serve";
        }
    }

    // Get the name of the chosen technique as a string
    string getTechniqueName() { return getTechniqueName(technique); }

   private:
    // Helper function to sort the items based on the chosen technique
    vector<Item> sortItems() {
        function<bool(Item, Item)> compare = getCompareFunction();
        return Sort<Item>::sort(items, compare);
    }

    // Helper function to get the comparison function based on the chosen
    // technique
    function<bool(Item, Item)> getCompareFunction() {
        switch (technique) {
            case Technique::ProfitPerWeight:
                return [](Item a, Item b) {
                    return a.profitPerWeight() > b.profitPerWeight();
                };
            case Technique::Profit:
                return [](Item a, Item b) { return a.profit > b.profit; };
            case Technique::Weight:
                return [](Item a, Item b) { return a.weight > b.weight; };
            case Technique::None:
            default:
                return [](Item a, Item b) { return true; };
        }
    }
};
