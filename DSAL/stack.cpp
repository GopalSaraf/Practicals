// Problem Statement :
// Implement stack as an abstract data type using singly linked list and
// use this ADT for conversion of infix expression to postfix, prefix and
// evaluation of postfix and prefix expression.

// Program by : 23168 Gopal Saraf

# include <bits/stdc++.h>
using namespace std;

class Node {                            // Node for linked list
    public :
    int data;
    Node* next;

    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    Node() {
        this->data = 0;
        this->next = NULL;
    }
};

class LinkedList {                      // Linked list class
    
    Node* head;                         // initializing head of linked list
    
    public :
    
    LinkedList() {
        head = NULL;
    }

    void insertNodeInFront(int data) {  // To insert node in front
        Node* newNode = new Node(data); // Node of input data

        if (head == NULL) {             // Checking is linked list empty
            head = newNode;
            return;
        }

        newNode->next = head;           // Inserting in front
        head = newNode;

    }

    int deleteNodeFromFront() {         // To delete node from front
        
        if (head == NULL)               // Checking is linked list empty
            return INT_MIN;
        
        int data = head->data;

        head = head->next;              // Assigning next element as head

        return data;
    }

    int getFirstElement() {             // To get first element from linked list

        if (head == NULL)               // Checking is linked list empty
            return INT_MIN;
        
        return head->data;              // Returning first element
        
    }

    void display() {                    // To display linked list
        Node* temp = head;
  
        if (head == NULL) {             // Checking is linked list empty
            cout << "List empty" << endl;
            return;
        }
        cout << "Stack : [ ";
        while (temp != NULL) {          // Iterating through linked list
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "]" << endl;
    }
};

class Stack {                           // Stack class
    LinkedList stack = LinkedList();    // Initializing stack as linked list

    public:

    void push(int data) {               // Push method
        stack.insertNodeInFront(data);
        cout << data << " pushed in stack" << endl;
    } 

    void pop() {                        // Pop method
        int data = stack.deleteNodeFromFront();

        if (data == INT_MIN) {
            cout << "Stack is empty" << endl;
        } else {
            cout << data << " removed from stack" << endl;
        }
    }

    void peek() {                       // Peek method
        int data = stack.getFirstElement();

        if (data == INT_MIN) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "First element in stack : " << data << endl;
        }
    }

    void display() {                    // To display stack
        stack.display();
    }

};

int main() {
    Stack stack;

    while (true) {                      // Menu
        char option;
        cout << "Choose an option : " << endl;
        cout << "a - Push element in stack" << endl;
        cout << "b - Remove element from stack" << endl;
        cout << "c - Peek for a element in stack" << endl;
        cout << "d - Display stack" << endl;
        cout << "e - Exit program" << endl << endl;
        cout << "Option > ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 'a':                   // Push
                int data;
                cout << "Enter element you want to push > ";
                cin >> data;
                cout << endl;
                stack.push(data);
                cout << endl;
                break;

            case 'b':                   // Pop
                stack.pop();
                cout << endl;
                break;

            case 'c':                   // Peek
                stack.peek();
                cout << endl;
                break;

            case 'd':                   // Display
                stack.display();
                cout << endl;
                break;

            case 'e':                   // Exit
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << endl;
                cout << "Incorrect option... Try again." << endl;
                cout << endl;
        }
    }
}
