#ifndef BST_H
#define BST_H

/*! A class representing a binary search tree (BST). */

class Node;

class BST
{
    Node* root;
public:
    BST();
    BST(int data);
    ~BST();

    void insert(int data);
    bool contains(int data);
    void inOrderPrint();
};

#endif