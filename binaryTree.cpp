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
