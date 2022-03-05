#include "BST.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        int data = std::stoi(std::string(argv[1]));
        std::cout << "Value at the root of the BST: " << data << "\n";

        BST* bst = new BST(data);

        int arr[] = {30, 20, 40, 70, 60, 80};
        int n = sizeof(arr) / sizeof(arr[0]);
        std::cout << "Values to be inserted in the BST (with the following order):\n";
        for (int i = 0; i < n; i++)
        {
            std::cout << arr[i] << "\n";
            bst->insert(arr[i]);
        }

        std::cout << "The BST (inorder traversal):\n";
        bst->inOrderPrint();
        std::cout << "\n";

        std::cout << "The height of the BST is: " << bst->height() << "\n";

        if (bst->contains(60))
        {
            std::cout << "The BST contains the value 60.\n";
        }

        delete bst;
    }

    return 0;
}