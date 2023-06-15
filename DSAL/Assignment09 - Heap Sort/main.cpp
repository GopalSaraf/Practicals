#include <bits/stdc++.h>
using namespace std;

// heapify function to maintain heap property.
void heapify(int arr[], int size, int ind) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int large = ind;
    int left = 2 * ind + 1, right = 2 * ind + 2;

    // If left child is larger than largest
    if (left < size && arr[large] < arr[left]) large = left;

    // If right child is larger than largest
    if (right < size && arr[large] < arr[right]) large = right;

    // large contains the index of largest value from all three
    if (large == ind) return;
    swap(arr[large], arr[ind]);
    heapify(arr, size, large);
}

// Function to build a Heap from array.
void buildHeap(int arr[], int size) {
    // internal nodes are from n/2-1 to 0
    for (int i = size / 2 - 1; i >= 0; --i) heapify(arr, size, i);
}

// Function to sort an array using Heap Sort.
void heapSort(int arr[], int size) {
    buildHeap(arr, size);
    for (int i = size - 1; i > 0; --i) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    int size, int_;
    char choice;

    cout << "Please enter the total number of elements  : ";
    cin >> size;

    int sorted[size];
    int unsorted[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> int_;
        sorted[i] = int_;
        unsorted[i] = int_;
    }

    heapSort(&sorted[0], size);

    while (true) {
        cout << endl;
        cout << "Choose an option : " << endl;
        cout << "a - Ascending order" << endl;
        cout << "b - Descending order" << endl;
        cout << "c - Exit" << endl << endl;
        cout << "Your choice > ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 'a':
                cout << "Initial Array : [ ";
                for (int i = 0; i < size - 1; i++) {
                    cout << unsorted[i] << ", ";
                }
                cout << unsorted[size - 1] << " ]" << endl;
                cout << "Ascending Array : [ ";
                for (int i = 0; i < size - 1; i++) {
                    cout << sorted[i] << ", ";
                }
                cout << sorted[size - 1] << " ]" << endl;
                break;

            case 'b':
                cout << "Initial Array : [ ";
                for (int i = 0; i < size - 1; i++) {
                    cout << unsorted[i] << ", ";
                }
                cout << unsorted[size - 1] << " ]" << endl;
                cout << "Descending Array : [ ";
                for (int i = size - 1; i > 0; i--) {
                    cout << sorted[i] << ", ";
                }
                cout << sorted[0] << " ]" << endl;
                break;

            case 'c':
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << "Incorrect Option" << endl;
                break;
        }
    }
}