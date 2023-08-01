#pragma once
#include <vector>

#include "item.h"
#include "sort.h"

using namespace std;

class Knapsack {
   public:
    enum Type {
        Fractional,
        Zero_One,
    };

    enum Technique {
        ProfitPerWeight,
        Profit,
        Weight,
        None,
    };

   private:
    const vector<Item>& items;
    double capacity;

    Type type;
    Technique technique;

    int noOfItems;
    vector<Item> filledItems;
    double profit;

    bool (*compare)(Item, Item);

   public:
    Knapsack(const vector<Item>& items, double capacity,
             Type type = Type::Fractional,
             Technique technique = Technique::ProfitPerWeight)
        : items(items), capacity(capacity), type(type), technique(technique) {
        noOfItems = items.size();
        profit = 0.0f;
    }

    void fillSack() {
        vector<Item> sortedItems = sortItems();

        double _capacity = this->capacity;

        int i = 0;
        while (i < noOfItems && _capacity > 0) {
            if (sortedItems[i].weight <= _capacity) {
                filledItems.push_back(sortedItems[i]);
                _capacity -= sortedItems[i].weight;
                profit += sortedItems[i].profit;
            } else {
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

    vector<Item> getFilledItems() { return filledItems; }

    double getProfit() { return round(profit * 100.0) / 100.0; }

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

    string getTechnique() { return getTechniqueName(technique); }

   private:
    vector<Item> sortItems() {
        setCompare();
        return Sort<Item>::sort(items, compare);
    }

    void setCompare() {
        switch (technique) {
            case Technique::ProfitPerWeight:
                compare = [](Item a, Item b) {
                    return a.profitPerWeight() > b.profitPerWeight();
                };
                break;
            case Technique::Profit:
                compare = [](Item a, Item b) { return a.profit > b.profit; };
                break;
            case Technique::Weight:
                compare = [](Item a, Item b) { return a.weight > b.weight; };
                break;
            case Technique::None:
            default:
                compare = [](Item a, Item b) { return true; };
                break;
        }
    }
};
