#pragma once
#include <vector>
#include <functional>

using namespace std;

template <typename T>
class Sort {
    vector<T> array;
    function<bool(T, T)> compare;

   public:
    // Constructor to initialize the Sort object with the given array and
    // comparison function
    Sort(const vector<T>& array, function<bool(T, T)> compare)
        : array(array), compare(compare) {}

    // Constructor to initialize the Sort object with the given array and
    // default comparison function (less than)
    Sort(const vector<T>& array) : array(array) {
        compare = [](T a, T b) { return a < b; };
    }

    // Sort the array in the specified range [start, end]
    vector<T> sort(int start, int end) {
        if (start < end) {
            int pivot = partition(start, end);
            sort(start, pivot - 1);
            sort(pivot + 1, end);
        }

        return array;
    }

    // Sort the entire array
    vector<T> sort() { return sort(0, array.size() - 1); }

    // Static method to sort the array using the specified comparison function
    // and range [start, end]
    static vector<T> sort(const vector<T>& array, function<bool(T, T)> compare,
                          int start = 0, int end = -1) {
        if (end == -1) end = array.size() - 1;
        Sort<T> sort(array, compare);
        return sort.sort(start, end);
    }

    // Static method to sort the entire array using the default comparison
    // function (less than)
    static vector<T> sort(const vector<T>& array) {
        Sort<T> sort(array);
        return sort.sort();
    }

   private:
    // Partition the array and return the index of the pivot element
    int partition(int start, int end) {
        T pivot = array[end];
        int i = start - 1;

        for (int j = start; j < end; j++) {
            if (compare(array[j], pivot)) {
                i++;
                swap(array[i], array[j]);
            }
        }

        swap(array[i + 1], array[end]);
        return i + 1;
    }

    // Swap two elements in the array
    void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
};
