#include "DocumentManager.h"
#include <iostream>

int main()
{
    // Get the singleton instance of DocumentManager
    DocumentManager *docManager1 = DocumentManager::getInstance();

    // Open a document using the DocumentManager
    docManager1->openDocument("example1.txt");

    // Attempt to get another instance to demonstrate singleton behavior
    DocumentManager *docManager2 = DocumentManager::getInstance();

    docManager2->openDocument("example2.txt");
    // Check if both instances are the same
    if (docManager1 == docManager2)
    {
        std::cout << "Both instances are the same." << std::endl;
    }
    else
    {
        std::cout << "Instances are different." << std::endl;
    }

    return 0;
}