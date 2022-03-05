#ifndef NODE_H
#define NODE_H

class Node
{
public:
    int data;
    Node* left; // pointer to the left subtree
    Node* right;    // pointer to the right subtree
public:
    Node(int data);
    ~Node();

    // insert
    void insert(int data);

    // search
    bool contains(int data);
    
    // inorder traverse
    void inOrderPrint();
};

#endif