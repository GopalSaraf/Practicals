// Problem Statement :
// Implement Circular Queue using Array.
// Perform following operations on it.
// a) Insertion (Enqueue)
// b) Deletion (Dequeue)
// c) Display queue

// Program by : 23168 Gopal Saraf

#include <climits>
#include <iostream>
using namespace std;

class Queue {
    int rear, front;  // Initialize front and rear
    int size;         // Circular Queue size
    int *arr;         // Array to hold data

   public:
    Queue(int s) {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }

    void enQueue(int value) {  // Function to create Circular queue
        if ((front == 0 && rear == size - 1) ||
            (rear == (front - 1) % (size - 1))) {
            cout << endl << "Queue is Full" << endl;
            return;
        }

        else if (front == -1)  // Insert First Element
            front = rear = 0;

        else if (rear == size - 1 && front != 0)
            rear = 0;

        else
            rear++;

        arr[rear] = value;
        cout << endl << value << " added in queue" << endl;
    }

    int deQueue() {  // Function to delete element from Circular Queue
        if (front == -1) {
            cout << endl << "Queue is Empty" << endl;
            return INT_MIN;
        }

        int data = arr[front];
        arr[front] = -1;

        if (front == rear) {
            front = -1;
            rear = -1;
        }

        else if (front == size - 1)
            front = 0;

        else
            front++;

        return data;
    }

    void displayQueue() {  // Function displaying the elements of Circular Queue
        if (front == -1) {
            cout << endl << "Queue is Empty" << endl;
            return;
        }

        cout << endl << "Elements in Circular Queue are: " << endl;
        cout << "[ ";

        if (rear >= front)
            for (int i = front; i <= rear; i++) cout << arr[i] << " ";

        else {
            for (int i = front; i < size; i++) cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++) cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    int size;
    cout << "Enter size of queue > ";
    cin >> size;                // Taking size of queue from user
    Queue queue = Queue(size);  // Initialize queue object

    while (true) {
        char option;
        cout << endl << "Choose an option : " << endl;
        cout << "a - Enqueue the queue" << endl;
        cout << "b - Dequeue the queue" << endl;
        cout << "c - Display the queue" << endl;
        cout << "e - Exit the program" << endl << endl;
        cout << "Your Option > ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 'a':  // Enqueue element
                int element;
                cout << "Enter element you want to insert in queue > ";
                cin >> element;
                queue.enQueue(element);
                break;

            case 'b':  // Dequeue
                cout << "Deleted element from queue " << queue.deQueue()
                     << endl;
                break;

            case 'c':  // Display queue
                queue.displayQueue();
                break;

            case 'e':
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << "Incorrect option. Try again..." << endl << endl;
        }
    }
    return 0;
}
