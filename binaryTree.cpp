#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;
    Node()
    {
        leftchild = nullptr;
        rightchild = nullptr;
    }
};
class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr;
    }
    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        Node *newNode = new Node();

        newNode->info = x;

        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        if (parent == nullptr)
        {
            ROOT = newNode;
            return;
        }

        if (x < parent->info)
        {
            parent->leftchild = newNode;
            return;
        }

        else if (x > parent->info)
        {
            parent->rightchild = newNode;
            return;
        }
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }
