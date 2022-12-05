#include <iostream>

#include "BinaryTree.h"
#include "Stack.h"

int main() {
    string postfix;
    cout << "Enter postfix expression > ";
    getline(cin, postfix);
    cout << endl;

    Stack<BinaryTreeNode<char> *> treeStack;
    for (char cha : postfix) {
        if (cha == ' ')  // skipping empty spaces
            continue;
        else if (isalnum(cha)) {  // 'a' - 'z' OR 'A' - 'Z' OR '0' - '9'
            BinaryTreeNode<char> *newNode = new BinaryTreeNode<char>(cha);
            treeStack.push(newNode);
        } else {  // operators
            BinaryTreeNode<char> *operationNode = new BinaryTreeNode<char>(cha);
            BinaryTreeNode<char> *second = treeStack.pop();
            BinaryTreeNode<char> *first = treeStack.pop();
            operationNode->setLeft(first);
            operationNode->setRight(second);
            treeStack.push(operationNode);
        }
    }

    BinaryTree<char> tree;
    tree.setRoot(treeStack.pop());
    cout << "Inorder expression    (Recursive)      >  ";
    tree.inorderRec();
    cout << endl;
    cout << "Inorder expression    (Non Recursive)  >  ";
    tree.inorderNonRec();
    cout << endl;
    cout << "Preorder expression   (Recursive)      >  ";
    tree.preorderRec();
    cout << endl;
    cout << "Preorder expression   (Non Recursive)  >  ";
    tree.preorderNonRec();
    cout << endl;
    cout << "Postorder expression  (Recursive)      >  ";
    tree.postorderRec();
    cout << endl;
    cout << "Postorder expression  (Non Recursive)  >  ";
    tree.postorderNonRec();
    cout << endl;
}