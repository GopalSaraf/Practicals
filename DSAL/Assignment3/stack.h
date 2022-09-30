#include <iostream>
using namespace std;

template <class Var>
class Node {  // Node for linked list
   public:
    Var data;
    Node* next;

    Node(Var data, Node* next) {
        this->data = data;
        this->next = next;
    }

    Node(Var data) {
        this->data = data;
        this->next = NULL;
    }

    Node() {
        this->data = 0;
        this->next = NULL;
    }
};

template <class Var>
class LinkedList {  // Linked list class

    Node<Var>* head;  // initializing head of linked list

   public:
    LinkedList() { head = NULL; }

    void insertNodeInFront(Var data) {             // To insert node in front
        Node<Var>* newNode = new Node<Var>(data);  // Node of input data

        if (head == NULL) {  // Checking is linked list empty
            head = newNode;
            return;
        }

        newNode->next = head;  // Inserting in front
        head = newNode;
    }

    Var deleteNodeFromFront() {  // To delete node from front

        if (head == NULL)  // Checking is linked list empty
            return '\0';

        Var data = head->data;

        head = head->next;  // Assigning next element as head

        return data;
    }

    Var getFirstElement() {  // To get first element from linked list

        if (head == NULL)  // Checking is linked list empty
            return '\0';

        return head->data;  // Returning first element
    }

    void display() {  // To display linked list
        Node<Var>* temp = head;

        if (head == NULL) {  // Checking is linked list empty
            cout << "Stack empty" << endl;
            return;
        }

        cout << "Stack : [ ";
        while (temp != NULL) {  // Iterating through linked list
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << "]" << endl;
    }
};

template <class Var>
class Stack {  // Stack class
    LinkedList<Var> stack =
        LinkedList<Var>();  // Initializing stack as linked list

   public:
    void push(Var data) {  // Push method
        stack.insertNodeInFront(data);
    }

    Var pop() {  // Pop method
        Var data = stack.deleteNodeFromFront();
        return data;
    }

    Var peek() {  // Peek method
        Var data = stack.getFirstElement();
        return data;
    }

    void display() {  // To display stack
        stack.display();
    }
};
