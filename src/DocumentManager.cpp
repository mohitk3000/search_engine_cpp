// DocumentManager.cpp
#include "DocumentManager.h"

// Initialize the static instance pointer
DocumentManager *DocumentManager::instance = nullptr;

DocumentManager *DocumentManager::getInstance()
{
    if (instance == nullptr)
    {
        instance = new DocumentManager();
    }
    return instance;
}

void DocumentManager::openDocument(const std::string &filename)
{
    // Implementation to open a document
    std::cout << "Opening document: " << filename << std::endl;
}