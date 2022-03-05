#include "BST.h"
#include "Node.h"

BST::BST()
{
    root = nullptr;
}

BST::BST(int data)
{
    this->root = new Node(data);
}

BST::~BST()
{
    if (root != nullptr)
    {
        delete root;
        root = nullptr;
    }
}

void BST::insert(int data)
{
    root->insert(data);
}

bool BST::contains(int data)
{
    root->contains(data);
}

void BST::inOrderPrint()
{
    root->inOrderPrint();
}

int BST::height()
{
    root->height();
}