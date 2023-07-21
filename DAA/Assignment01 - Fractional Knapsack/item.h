#pragma once
#include <string>

using namespace std;

struct Item {
    string name;
    double weight;
    double profit;

    Item(string name, double weight, double profit)
        : name(name), weight(weight), profit(profit) {}

    Item(double weight, double profit) : Item("", weight, profit) {}

    Item(string name) : Item(name, 0.0, 0.0) {}

    Item() : Item("", 0.0, 0.0) {}

    double profitPerWeight() { return profit / weight; }

    Item& operator=(const Item& other) {
        name = other.name;
        weight = other.weight;
        profit = other.profit;
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Item& item) {
        string name = item.name;
        if (name == "") name = "Item";
        os << name << " (weight: " << item.weight << ", profit: " << item.profit
           << ")";
        return os;
    }
};
