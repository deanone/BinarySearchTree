#include "Node.h"
#include <iostream>

Node::Node(int data)
{
    this->data = data;
    left = nullptr;
    right = nullptr;
}

Node::~Node()
{
    if (left != nullptr)
    {
        delete left;
        left = nullptr;
    }

    if (right != nullptr)
    {
        delete right;
        right = nullptr;
    }
}

// recursive implementation
void Node::insert(int data)
{
    if (data == this->data)
    {
        return; // no duplicates are allowed in a BST
    }

    if (data < this->data)
    {
        if (left == nullptr)
        {
            Node* node = new Node(data);
            left = node;
        }
        else
        {
            left->insert(data);
        }
    }
    else
    {
        if (right == nullptr)
        {
            Node* node = new Node(data);
            right = node;
        }
        else
        {
            right->insert(data);
        }
    }
}

// recursive implementation
bool Node::contains(int data)
{
    if (data == this->data)
    {
        return true;
    }

    if (data < this->data)
    {
        if (left != nullptr)
        {
            left->contains(data);
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (right != nullptr)
        {
            right->contains(data);
        }
        else
        {
            return true;
        }
    }
}

// recursive implementation
void Node::inOrderPrint()
{
    if (left != nullptr)
    {
        left->inOrderPrint();
    }
    std::cout << data << " ";
    if (right != nullptr)
    {
        right->inOrderPrint();
    }
}

// recursive implementation
int Node::height()
{
    if ((left == nullptr) && (right == nullptr))
    {
        return 0;
    }

    if (right == nullptr)
    {
        return (1 + left->height());
    }
    else if (left == nullptr)
    {
        return (1 + right->height());
    }
    else
    {
        int hLeft = left->height();
        int hRight = right->height();
        int maxHeight = (hLeft > hRight) ? hLeft : hRight;
        return (1 + maxHeight);
    }
}