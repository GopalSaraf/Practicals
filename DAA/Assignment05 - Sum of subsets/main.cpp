#include <iostream>
#include <vector>

using namespace std;

void displaySubset(const vector<int>& subset) {
    for (int num : subset) {
        cout << num << " ";
    }
    cout << endl;
}

void subsetSum(const vector<int>& set, vector<int>& subset, int index,
               int sum) {
    if (sum == 0) {
        displaySubset(subset);
        return;
    }

    if (index >= set.size() || sum < 0) {
        return;
    }

    subset.push_back(set[index]);
    subsetSum(set, subset, index + 1, sum - set[index]);
    subset.pop_back();
    subsetSum(set, subset, index + 1, sum);
}

void findSubset(const vector<int>& set, int sum) {
    vector<int> subset;
    subsetSum(set, subset, 0, sum);
}

int main() {
    vector<int> weights = {10, 7, 5, 18, 12, 20, 15};
    int sum = 35;
    findSubset(weights, sum);
}