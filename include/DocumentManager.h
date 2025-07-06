// using singleton pattern design a Document manager class

#include <string>
#include <iostream>

class DocumentManager
{
private:
    static DocumentManager *instance;
    DocumentManager() {} // Private constructor to prevent instantiation
public:
    // Delete copy constructor and assignment operator to prevent copying
    DocumentManager(const DocumentManager &) = delete;
    DocumentManager &operator=(const DocumentManager &) = delete;

    // Static method to get the instance of the DocumentManager
    static DocumentManager *getInstance();

    // Method to open a document
    void openDocument(const std::string &filename);
}; // end of DocumentManager class
