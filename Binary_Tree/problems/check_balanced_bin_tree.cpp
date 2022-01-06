#include <iostream>
#include "Node_class.cpp"
using namespace std;

int height(node *n)
{
    if (!n)
        return 0;
    return max(1 + height(n->left), 1 + height(n->right));
}

bool checkBalancedBinTree(node *n)
{
    if (!n)
        return true;
    int lh = height(n->left);
    int rh = height(n->right);
    return (abs(lh - rh) <= 1 && checkBalancedBinTree(n->left) && checkBalancedBinTree(n->right));
}

int main()
{
    node *root = tempBinaryTree();
    bool res = checkBalancedBinTree(root);
    if (res)
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
}

// TIME COMPLEXITY - O(N^2)