#pragma once
#include <vector>

using namespace std;

template <typename T>
class Sort {
    vector<T> array;
    bool (*compare)(T, T);

   public:
    Sort(const vector<T>& array, bool (*compare)(T, T))
        : array(array), compare(compare) {}

    Sort(const vector<T>& array) : array(array) {
        compare = [](T a, T b) { return a < b; };
    }

    vector<T> sort(int start, int end) {
        if (start < end) {
            int pivot = partition(start, end);
            sort(start, pivot - 1);
            sort(pivot + 1, end);
        }

        return array;
    }

    vector<T> sort() { return sort(0, array.size() - 1); }

    static vector<T> sort(const vector<T>& array, bool (*compare)(T, T),
                          int start = 0, int end = -1) {
        if (end == -1) end = array.size() - 1;
        Sort<T> sort(array, compare);
        return sort.sort(start, end);
    }

    static vector<T> sort(const vector<T>& array, int start, int end) {
        Sort<T> sort(array);
        return sort.sort(start, end);
    }

    static vector<T> sort(const vector<T>& array) {
        Sort<T> sort(array);
        return sort.sort();
    }

   private:
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

    void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
};