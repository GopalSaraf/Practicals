#pragma once

using namespace std;

// forward declarations

template <typename T>
class LLNode;

template <typename T>
class LinkedList;

template <typename T>
class Stack;

// end of declarations

template <typename T>
class LLNode {
    T data;
    LLNode *next;
    friend class LinkedList<T>;

   public:
    LLNode(const T &data) : data(data), next(nullptr) {}
};

template <typename T>
class LinkedList {
    LLNode<T> *head;
    int llSize;

   public:
    LinkedList() : head(nullptr), llSize(0) {}

    void push_back(const T &value) {
        if (empty()) {
            head = new LLNode<T>(value);
            llSize = 1;
            return;
        }

        LLNode<T> *newNode = new LLNode<T>(value);

        LLNode<T> *temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;

        llSize++;
    }

    const void push_front(const T &value) {
        if (empty()) {
            head = new LLNode<T>(value);
            llSize = 1;
            return;
        }

        LLNode<T> *newNode = new LLNode<T>(value);
        newNode->next = head;
        head = newNode;

        llSize++;
    }

    const T pop_back() {
        if (empty()) return NULL;

        LLNode<T> *temp = head;
        while (temp->next->next != NULL) temp = temp->next;
        T data = temp->next->data;
        temp->next = nullptr;
        llSize--;
        return data;
    }

    const T pop_front() {
        if (empty()) return NULL;

        T data = head->data;
        head = head->next;
        llSize--;
        return data;
    }

    const T at(const int &index) {
        if (index < 0 || index >= llSize) throw out_of_range("Out of range");
        if (empty()) return NULL;

        LLNode<T> *temp = head;
        for (int currIndex = 0; currIndex < index; currIndex++)
            temp = temp->next;
        T data = temp->data;
        return data;
    }

    const void print() {
        LLNode<T> *temp = head;
        cout << "[ ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "]" << endl;
    }

    int size() const { return llSize; }

    bool empty() const { return head == nullptr; }
};

template <typename T>
class Stack {
    LinkedList<T> stackLL;

   public:
    const void push(const T &value) { stackLL.push_front(value); }
    const T pop() { return stackLL.pop_front(); }
    const T peek() { return stackLL.at(0); }
    const void print() { stackLL.print(); }
    const bool isEmpty() const { return stackLL.empty(); }
};