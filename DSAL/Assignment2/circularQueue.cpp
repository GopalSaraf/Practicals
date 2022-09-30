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
    string *arr;      // Array to hold data

   public:
    Queue(int s) {
        front = rear = -1;
        size = s;
        arr = new string[s];
    }

    void enQueue(string value) {  // Function to create Circular queue
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

    string deQueue() {  // Function to delete element from Circular Queue
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return "";
        }

        string data = arr[front];
        arr[front] = "";

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
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Elements in Circular Queue are: ";
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
        string element;
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
                cout << "Enter name you want to insert in queue > ";
                cin >> element;
                queue.enQueue(element);
                break;

            case 'b':  // Dequeue
                element = queue.deQueue();
                if (element != "") {
                    cout << "Deleted name from queue : " << element << endl;
                }
                break;

            case 'c':  // Display queue
                queue.displayQueue();
                break;

            case 'e':
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << "Incorrect option. Try again..." << endl;
                break;
        }
    }
    return 0;
}
