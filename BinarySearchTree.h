#pragma once
#include <cstddef>
class BinarySearchTree
{
private:
    struct tree_node
    {
        tree_node* left;
        tree_node* right;
        int data;
    };
    tree_node* root;

public:
    BinarySearchTree()
    {
        root = NULL;
    }

    bool isEmpty() const { return root == NULL; }
    void print_postorder();
    void postorder(tree_node*, int indent);
    void insert(int);
    void remove(int);
};

