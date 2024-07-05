#include "BinarySearchTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree() : root(nullptr) {}

BinarySearchTree::~BinarySearchTree() {
    delete_tree(root);
}

void BinarySearchTree::insert(int value) {
    insert(root, value);
}

void BinarySearchTree::remove(int value) {
    remove(root, value);
}

void BinarySearchTree::print_postorder() {
    print_postorder(root);
    std::cout << std::endl;
}

void BinarySearchTree::insert(Node*& node, int value) {
    if (node == nullptr) {
        node = new Node(value);
    } else if (value < node->data) {
        insert(node->left, value);
    } else {
        insert(node->right, value);
    }
}

void BinarySearchTree::remove(Node*& node, int value) {
    if (node == nullptr) return;

    if (value < node->data) {
        remove(node->left, value);
    } else if (value > node->data) {
        remove(node->right, value);
    } else {
        Node* temp = nullptr;
        if (node->left == nullptr) {
            temp = node->right;
            delete node;
            node = temp;
        } else if (node->right == nullptr) {
            temp = node->left;
            delete node;
            node = temp;
        } else {
            Node* succParent = node->right;
            Node* succ = node->right;
            while (succ->left != nullptr) {
                succParent = succ;
                succ = succ->left;
            }
            if (succParent != node) {
                succParent->left = succ->right;
            } else {
                succParent->right = succ->right;
            }
            node->data = succ->data;
            delete succ;
        }
    }
}

void BinarySearchTree::print_postorder(Node* node) {
    if (node == nullptr) return;

    print_postorder(node->left);
    print_postorder(node->right);
    std::cout << node->data << " ";
}

void BinarySearchTree::delete_tree(Node* node) {
    if (node == nullptr) return;

    delete_tree(node->left);
    delete_tree(node->right);
    delete node;
}
