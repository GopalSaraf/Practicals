#pragma once
using namespace std;

// forward declarations

// BST node
template <typename T>
class ThreadedBSTNode;

// BST
template <typename T>
class ThreadedBST;

// end of declarations

// BST node
template <typename T>
class ThreadedBSTNode {
    T data;
    ThreadedBSTNode* left;
    ThreadedBSTNode* right;

    // False if left pointer points to predecessor
    // in Inorder Traversal
    bool lthread;

    // False if right pointer points to successor
    // in Inorder Traversal
    bool rthread;

    // BST class
    friend class ThreadedBST<T>;

   public:
    ThreadedBSTNode(const T& data)
        : data(data),
          left(nullptr),
          right(nullptr),
          lthread(false),
          rthread(false) {}
};

// BST
template <typename T>
class ThreadedBST {
    ThreadedBSTNode<T>* root;  // Root node of the tree

   public:
    ThreadedBST() : root(nullptr) {}

    // To insert a node into the tree
    const void insertNode(const T& value) {
        root = insertNode(root, value);
        cout << "Inserted node : " << value << endl;
    }

    // To search a node into the tree
    const void searchNode(const T& value) const {
        ThreadedBSTNode<T>* node = searchNode(root, value);
        // If the node is nullptr, then node doesn't exist'
        if (node == nullptr)
            cout << "Search Failed." << endl;
        else
            cout << "Search Successful." << endl;
    }

    // Inorder traversal of the tree
    const void inorder() const {
        cout << "Inorder traversal  : ";
        inorder(root);
        cout << endl;
    }

    // Preorder traversal of the tree
    const void preorder() const {
        cout << "Preorder traversal : ";
        preorder(root);
        cout << endl;
    }

    // Setter for the root node
    const void setRoot(ThreadedBSTNode<T>* node) { root = node; }

    // Getter for the root node
    const ThreadedBSTNode<T>* getRoot() const { return root; }

   private:
    // A utility function to insert node
    ThreadedBSTNode<T>* insertNode(ThreadedBSTNode<T>* node, const T& value) {
        // Searching for a Node with given value
        ThreadedBSTNode<T>* ptr = node;
        ThreadedBSTNode<T>* par = nullptr;  // Parent of key to be inserted
        while (ptr != nullptr) {
            // If key already exists, return
            if (value == ptr->data) {
                return node;
            }

            par = ptr;  // Update parent pointer

            // Moving on left subtree.
            if (value < ptr->data) {
                if (ptr->lthread == false)
                    ptr = ptr->left;
                else
                    break;
            }

            // Moving on right subtree.
            else {
                if (ptr->rthread == false)
                    ptr = ptr->right;
                else
                    break;
            }
        }

        // Create a new node
        ThreadedBSTNode<T>* tmp = new ThreadedBSTNode(value);
        tmp->lthread = true;
        tmp->rthread = true;

        if (par == nullptr) {
            node = tmp;
            tmp->left = nullptr;
            tmp->right = nullptr;
        } else if (value < par->data) {
            tmp->left = par->left;
            tmp->right = par;
            par->lthread = false;
            par->left = tmp;
        } else {
            tmp->left = par;
            tmp->right = par->right;
            par->rthread = false;
            par->right = tmp;
        }

        return node;
    }

    // A utility function to search node
    ThreadedBSTNode<T>* searchNode(ThreadedBSTNode<T>* node,
                                   const T& value) const {
        // base case
        if (node == nullptr) return nullptr;

        // found required node
        else if (node->data == value)
            return node;

        // If the key is greater than the root's
        // key, then it lies in right subtree
        else if (value > node->data)
            return searchNode(node->right, value);

        // If the key is smaller than the root's
        // key, then it lies in left subtree
        else if (value < node->data)
            return searchNode(node->left, value);

        return nullptr;
    }

    // Returns inorder successor using rthread
    ThreadedBSTNode<T>* inorderSuccessor(ThreadedBSTNode<T>* ptr) const {
        // If rthread is set, we can quickly find
        if (ptr->rthread == true) return ptr->right;

        // Else return leftmost child of right subtree
        ptr = ptr->right;
        while (ptr->lthread == false) ptr = ptr->left;
        return ptr;
    }

    // Printing the threaded tree
    const void inorder(ThreadedBSTNode<T>* node) const {
        if (node == nullptr) return;

        // Reach leftmost node
        ThreadedBSTNode<T>* ptr = node;
        while (ptr->lthread == false) ptr = ptr->left;

        // One by one print successors
        while (ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = inorderSuccessor(ptr);
        }
    }

    // A utility function to preorder traversal
    const void preorder(ThreadedBSTNode<T>* node) const {
        // base case
        if (node == nullptr)
            return;
        else {
            // root left right
            cout << node->data << " ";
            if (!node->lthread) preorder(node->left);
            if (!node->rthread) preorder(node->right);
        }
    }
};
