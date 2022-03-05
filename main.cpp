#include "BST.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    int data = std::stoi(std::string(argv[1]));
    BST* bst = new BST(data);

    bst->insert(30);
    bst->insert(20);
    bst->insert(40);
    bst->insert(70);
    bst->insert(60);
    bst->insert(80);

    std::cout << "The tree (inorder traversal):\n";
    bst->inOrderPrint();
    std::cout << "\n";

    if (bst->contains(60))
    {
        std::cout << "The BST contains the value 60.\n";
    }

    delete bst;

    return 0;
}