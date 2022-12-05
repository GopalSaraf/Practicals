#pragma once
#include "Stack.h"

// forward declarations

template <typename T>
class BinaryTreeNode;

template <typename T>
class BinaryTree;

// end of declarations

template <typename T>
class BinaryTreeNode {
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    friend class BinaryTree<T>;

   public:
    BinaryTreeNode(const T& data) : data(data), left(nullptr), right(nullptr) {}

    void setLeft(BinaryTreeNode<T>* node) { left = node; }

    void setRight(BinaryTreeNode<T>* node) { right = node; }
};

template <typename T>
class BinaryTree {
    BinaryTreeNode<T>* root;

   public:
    BinaryTree() : root(nullptr) {}

    const void setRoot(BinaryTreeNode<T>* node) { root = node; }

    const BinaryTreeNode<T>* getRoot() const { return root; }

    const void inorderRec(BinaryTreeNode<T>* node) {
        if (node == nullptr)
            return;
        else {
            inorderRec(node->left);
            cout << node->data << " ";
            inorderRec(node->right);
        }
    }

    const void inorderRec() { inorderRec(root); }

    const void inorderNonRec(BinaryTreeNode<T>* node) {
        Stack<BinaryTreeNode<T>*> stack;
        BinaryTreeNode<T>* currentNode = node;

        while (currentNode != nullptr || !stack.isEmpty()) {
            while (currentNode != nullptr) {
                stack.push(currentNode);
                currentNode = currentNode->left;
            }
            currentNode = stack.pop();
            cout << currentNode->data << " ";
            currentNode = currentNode->right;
        }
    }

    const void inorderNonRec() { inorderNonRec(root); }

    const void preorderRec(BinaryTreeNode<T>* node) {
        if (node == nullptr)
            return;
        else {
            cout << node->data << " ";
            preorderRec(node->left);
            preorderRec(node->right);
        }
    }

    const void preorderRec() { preorderRec(root); }

    const void preorderNonRec(BinaryTreeNode<T>* node) {
        Stack<BinaryTreeNode<T>*> stack;
        stack.push(node);

        while (!stack.isEmpty()) {
            BinaryTreeNode<T>* currentNode = stack.pop();
            cout << currentNode->data << " ";

            if (currentNode->right) {
                stack.push(currentNode->right);
            }
            if (currentNode->left) {
                stack.push(currentNode->left);
            }
        }
    }

    const void preorderNonRec() { preorderNonRec(root); }

    const void postorderRec(BinaryTreeNode<T>* node) {
        if (node == nullptr)
            return;
        else {
            postorderRec(node->left);
            postorderRec(node->right);
            cout << node->data << " ";
        }
    }

    const void postorderRec() { postorderRec(root); }

    const void postorderNonRec(BinaryTreeNode<T>* node) {
        Stack<BinaryTreeNode<T>*> stack;
        stack.push(node);

        while (!stack.isEmpty()) {
            BinaryTreeNode<T>* currentNode = stack.peek();

            if (currentNode->left) {
                stack.push(currentNode->left);
                currentNode->left = nullptr;
            } else if (currentNode->right) {
                stack.push(currentNode->right);
                currentNode->right = nullptr;
            } else {
                cout << currentNode->data << " ";
                stack.pop();
            }
        }
    }

    const void postorderNonRec() { postorderNonRec(root); }
};
