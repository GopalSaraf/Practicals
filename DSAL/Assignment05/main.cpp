#include <iostream>

#include "BinarySearchTree.h"

int main() {
    BinarySearchTree<int> binaryTree;
    char option;
    int int_;
    while (true) {
        cout << endl << "Choose an option : " << endl;
        cout << "a - Insert" << endl;
        cout << "b - Delete" << endl;
        cout << "c - Search" << endl;
        cout << "d - Display tree (Traversal)" << endl;
        cout << "e - Display - Depth of tree" << endl;
        cout << "f - Display all child nodes with their parent nodes" << endl;
        cout << "g - Display all leaf nodes" << endl;
        cout << "h - Display tree levelwise" << endl;
        cout << "i - Exit" << endl << endl;
        cout << "Your Option > ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 'a':
                cout << "Enter the element you want to insert : ";
                cin >> int_;
                binaryTree.insertNode(int_);
                break;

            case 'b':
                cout << "Enter the element you want to delete : ";
                cin >> int_;
                binaryTree.deleteNode(int_);
                break;

            case 'c':
                cout << "Enter the element you want to search : ";
                cin >> int_;
                binaryTree.searchNode(int_);
                break;

            case 'd':
                binaryTree.inorder();
                binaryTree.preorder();
                binaryTree.postorder();
                break;

            case 'e':
                binaryTree.depth();
                break;

            case 'f':
                binaryTree.printParentsAndChildren();
                break;

            case 'g':
                binaryTree.printLeafNodes();
                break;

            case 'h':
                binaryTree.printLevelOrder();
                break;

            case 'i':
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << "Incorrect option. Try again..." << endl;
                break;
        }
    }
    return 0;
}
