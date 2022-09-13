#include <iostream>
#include <climits>
using namespace std;

class Queue {
	int rear, front;
	int size;
	int *arr;

    public:

	Queue(int s) {
        front = rear = -1;
        size = s;
        arr = new int[s];
	}

	void enQueue(int value) {
        if ((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) {
            cout << endl << "Queue is Full" << endl;
            return;
	    }

        else if (front == -1) 
            front = rear = 0;
        
        else if (rear == size-1 && front != 0) 
            rear = 0;

        else 
            rear++;
        
        arr[rear] = value;
        cout << endl << value << " added in queue" << endl;
    }

	int deQueue() {
        if (front == -1) {
            cout << endl << "Queue is Empty" << endl;;
            return INT_MIN;
        }

        int data = arr[front];
        arr[front] = -1;

        if (front == rear) {
            front = -1;
            rear = -1;
        }

        else if (front == size-1)
            front = 0;

        else
            front++;

        return data;
    }

	void displayQueue() {
        if (front == -1) {
            cout << endl << "Queue is Empty" << endl;
            return;
        }

        cout << endl << "Elements in Circular Queue are: " << endl;
        cout << "[ ";

        if (rear >= front) {    
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";

            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    int size;
    cout << "Enter size of queue > ";
    cin >> size;
    Queue queue = Queue(size);

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
        case 'a':
            int element;
            cout << "Enter element you want to insert in queue > ";
            cin >> element;
            queue.enQueue(element);
            break;
        
        case 'b':
            cout << "Deleted element from queue " << queue.deQueue() << endl;
            break;
        
        case 'c':
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
