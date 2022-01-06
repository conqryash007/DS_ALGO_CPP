#include <iostream>
#include "Node_class.cpp"
using namespace std;

int height(node *n)
{
    if (!n)
        return 0;
    return max(1 + height(n->left), 1 + height(n->right));
}

int main()
{
    node *root = tempBinaryTree();
    cout << "Height : " << height(root);
    return 0;
}