#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int v)
    {
        left = nullptr;
        right = nullptr;
        val = v;
    }
};
class Binary_Tree
{
public:
    Node *root;
    void insert(int val)
    {
        if (root != nullptr)
            insert(root, val);
        else
        {
            root = new Node(val);
            root->left = nullptr;
            root->right = nullptr;
        }