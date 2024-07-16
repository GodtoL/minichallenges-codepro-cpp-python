#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BST {
public:
    BST() : root(nullptr) {}

    void insert(int value) {
        root = insertRec(root, value);
    }

    void inOrderTraversal() {
        inOrderRec(root);
    }

private:
    Node* root;

    Node* insertRec(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } else {
            node->right = insertRec(node->right, value);
        }

        return node;
    }

    void inOrderRec(Node* node) {
        if (node != nullptr) {
            inOrderRec(node->left);
            std::cout << node->data << " ";
            inOrderRec(node->right);
        }
    }
};

int main() {
    BST tree;

    // Insertar 5 elementos
    tree.insert(10);
    tree.insert(5);
    tree.insert(20);
    tree.insert(3);
    tree.insert(7);

    std::cout << "Orden: ";
    tree.inOrderTraversal();

    return 0;
}
