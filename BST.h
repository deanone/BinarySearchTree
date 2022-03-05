#ifndef BST_H
#define BST_H

/*! A class representing a binary search tree (BST). */

class Node;

class BST
{
    Node* root;
public:
    /*!
     * Default constructor. 
     */
    BST();

    /*!
     * Constructor.
     * @param data the value of the data item of the root of the BST. 
     */
    BST(int data);

    /*!
     * Destructor. 
     */
    ~BST();

    /*!
     * Inserts a new data item to the BST.
     * @param the value of the data item to be inserted in the BST. 
     */
    void insert(int data);

    /*!
     * Checks if a data item exists in the BST.
     * @param data the value of the data item to check if exists in the BST.
     * @return true if the data item exists in the BST, false otherwise.
     */
    bool contains(int data);

    /*!
     * Traverses the tree in inorder way and prints its data items.
     */
    void inOrderPrint();

    /*!
     * Calculates the height of the BST (i.e., the number of edges between its root and its furthest leaf.
     * @return the height of the BST.
     */
    int height();
};

#endif