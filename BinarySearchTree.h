#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

class BinarySearchTree {
public:
    BinarySearchTree();
    ~BinarySearchTree();

    void insert(int value);
    void remove(int value);
    void print_postorder();

private:
    struct Node {
        int data;
        Node* left;
        Node* right;

        Node(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

    void insert(Node*& node, int value);
    void remove(Node*& node, int value);
    void print_postorder(Node* node);
    void delete_tree(Node* node);
};

#endif // BINARYSEARCHTREE_H
