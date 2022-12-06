#pragma once
using namespace std;

// forward declarations

// BST node
template <typename T>
class BinarySearchTreeNode;

// BST
template <typename T>
class BinarySearchTree;

// end of declarations

// BST node
template <typename T>
class BinarySearchTreeNode {
    T data;
    BinarySearchTreeNode* left;
    BinarySearchTreeNode* right;

    // BST class
    friend class BinarySearchTree<T>;

   public:
    BinarySearchTreeNode(const T& data)
        : data(data), left(nullptr), right(nullptr) {}
};

// BST
template <typename T>
class BinarySearchTree {
    BinarySearchTreeNode<T>* root;  // Root node of the tree

   public:
    BinarySearchTree() : root(nullptr) {}

    // To insert a node into the tree
    const void insertNode(const T& value) {
        root = insertNode(root, value);
        cout << "Inserted node : " << value << endl;
    }

    // To remove a node from the tree
    const void deleteNode(const T& value) {
        BinarySearchTreeNode<T>* node = searchNode(root, value);
        if (node == nullptr)
            cout << "Node not found" << endl;
        else {
            cout << "Deleted node : " << value << endl;
            root = deleteNode(root, value);
        }
    }

    // To search a node into the tree
    const void searchNode(const T& value) const {
        BinarySearchTreeNode<T>* node = searchNode(root, value);
        // If the node is nullptr, then node doesn't exist'
        if (node == nullptr)
            cout << "Search Failed." << endl;
        else
            cout << "Search Successful." << endl;
    }

    // Inorder traversal of the tree
    const void inorder() const {
        cout << "Inorder traversal   : ";
        inorder(root);
        cout << endl;
    }

    // Preorder traversal of the tree
    const void preorder() const {
        cout << "Preorder traversal  : ";
        preorder(root);
        cout << endl;
    }

    // Postorder traversal of the tree
    const void postorder() const {
        cout << "Postorder traversal : ";
        postorder(root);
        cout << endl;
    }

    // Depth of the tree
    const void depth() {
        cout << "Max depth of tree : " << maxDepth(root) << endl;
    }

    // To print parents and children of the tree
    const void printParentsAndChildren() {
        cout << "Parents and childrens of tree :" << endl;
        printParentsAndChildren(root);
    }

    // To print leaf nodes of the tree
    const void printLeafNodes() {
        cout << "Leaf nodes of tree : ";
        printLeafNodes(root);
        cout << endl;
    }

    // To print the tree level wise
    const void printLevelOrder() {
        cout << "Level wise order of tree : " << endl;
        printLevelOrder(root);
    }

    // Setter for the root node
    const void setRoot(BinarySearchTreeNode<T>* node) { root = node; }

    // Getter for the root node
    const BinarySearchTreeNode<T>* getRoot() const { return root; }

   private:
    // A utility function to insert node
    BinarySearchTreeNode<T>* insertNode(BinarySearchTreeNode<T>* node,
                                        const T& value) {
        // If the tree is empty, return a new node
        if (node == nullptr) node = new BinarySearchTreeNode<T>(value);

        // If the key to be inserted is greater than the root's key,
        // then it should be inserted into right subtree
        else if (value > node->data)
            node->right = insertNode(node->right, value);

        // If the key to be inserted is smaller than the root's key,
        // then it should be inserted into left subtree
        else if (value < node->data)
            node->left = insertNode(node->left, value);

        return node;
    }

    // A utility function to delete node
    BinarySearchTreeNode<T>* deleteNode(BinarySearchTreeNode<T>* node,
                                        const T& value) {
        // base case
        if (node == nullptr) return nullptr;

        // If the key to be deleted is greater than
        // the root's key, then it lies in right subtree
        else if (value > node->data)
            node->right = deleteNode(node->right, value);

        // If the key to be deleted is smaller than
        // the root's key, then it lies in left subtree
        else if (value < node->data)
            node->left = deleteNode(node->left, value);

        // if key is same as root's key
        else {
            // node has no child
            if (node->left == nullptr && node->right == nullptr) return nullptr;

            // node with only one child or no child
            else if (node->left == nullptr) {
                BinarySearchTreeNode<T>* temp = node->right;
                free(node);
                return temp;
            } else if (node->right == nullptr) {
                BinarySearchTreeNode<T>* temp = node->left;
                free(node);
                return temp;
            }

            // return the node with minimum key value found in that tree
            auto minValueNode =
                [](BinarySearchTreeNode<T>* node) -> BinarySearchTreeNode<T>* {
                BinarySearchTreeNode<T>* current = node;

                // loop down to find the leftmost leaf
                while (current && current->left != nullptr)
                    current = current->left;

                return current;
            };

            // node with two children: Get the inorder successor
            BinarySearchTreeNode<T>* temp = minValueNode(node->right);

            // Copy the inorder successor's content to this node
            node->data = temp->data;

            // Delete the inorder successor
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    // A utility function to search node
    BinarySearchTreeNode<T>* searchNode(BinarySearchTreeNode<T>* node,
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

    // A utility function to inorder traversal
    const void inorder(BinarySearchTreeNode<T>* node) const {
        // base case
        if (node == nullptr)
            return;
        else {
            // left root right
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    // A utility function to preorder traversal
    const void preorder(BinarySearchTreeNode<T>* node) const {
        // base case
        if (node == nullptr)
            return;
        else {
            // root left right
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    // A utility function to postorder traversal
    const void postorder(BinarySearchTreeNode<T>* node) const {
        // base case
        if (node == nullptr)
            return;
        else {
            // left right root
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

    // A utility function to find max depth of the tree
    const int maxDepth(BinarySearchTreeNode<T>* node) const {
        // base case
        if (node == nullptr)
            return 0;
        else {
            // compute the depth of each subtree
            int lDepth = maxDepth(node->left);
            int rDepth = maxDepth(node->right);

            // use the larger one
            if (lDepth > rDepth)
                return (lDepth + 1);
            else
                return (rDepth + 1);
        }
    }

    // A utility function to print parents and childrens of the tree
    const void printParentsAndChildren(BinarySearchTreeNode<T>* node) const {
        // base case
        if (node == nullptr) return;

        // leaf node
        if (node->left == nullptr && node->right == nullptr) return;

        // Found parent node
        cout << "Parent --> " << node->data << " , Childrens --> ";

        // Print left children if exists
        if (node->left != nullptr) cout << "Left - " << node->left->data << " ";

        // Print right children if exists
        if (node->right != nullptr) cout << "Right - " << node->right->data;

        cout << endl;

        // Recursive call to childrens
        if (node->left != nullptr) printParentsAndChildren(node->left);
        if (node->right != nullptr) printParentsAndChildren(node->right);
    }

    // A utility function to print leaf nodes of the tree
    const void printLeafNodes(BinarySearchTreeNode<T>* node) const {
        // base case
        if (node == nullptr) return;

        // Found leaf node
        if (node->left == nullptr && node->right == nullptr)
            cout << node->data << " ";

        // Recursive call to childrens
        if (node->left != nullptr) printLeafNodes(node->left);
        if (node->right != nullptr) printLeafNodes(node->right);
    }

    // Function to print level order traversal a tree
    const void printLevelOrder(BinarySearchTreeNode<T>* root) const {
        int h = maxDepth(root);
        int i;
        for (i = 1; i <= h; i++) {
            printCurrentLevel(root, i);
            cout << endl;
        }
    }

    // Print nodes at a current level
    const void printCurrentLevel(BinarySearchTreeNode<T>* root,
                                 int level) const {
        if (root == nullptr) return;
        if (level == 1)
            cout << root->data << " ";
        else if (level > 1) {
            printCurrentLevel(root->left, level - 1);
            printCurrentLevel(root->right, level - 1);
        }
    }
};
