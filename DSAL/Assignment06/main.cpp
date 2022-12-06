#include <iostream>

#include "ThreadedBST.h"

int main() {
    ThreadedBST<int> threadedBST;
    char option;
    int int_;
    while (true) {
        cout << endl << "Choose an option : " << endl;
        cout << "a - Insert" << endl;
        cout << "b - Display tree (Traversal)" << endl;
        cout << "c - Search" << endl;
        cout << "d - Exit" << endl << endl;
        cout << "Your Option > ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 'a':
                cout << "Enter the element you want to insert : ";
                cin >> int_;
                threadedBST.insertNode(int_);
                break;

            case 'b':
                threadedBST.inorder();
                threadedBST.preorder();
                break;

            case 'c':
                cout << "Enter the element you want to search : ";
                cin >> int_;
                threadedBST.searchNode(int_);
                break;

            case 'd':
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << "Incorrect option. Try again..." << endl;
                break;
        }
    }
    return 0;
}
