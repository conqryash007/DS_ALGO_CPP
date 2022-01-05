#include <iostream>
#include "Node_class.cpp"
using namespace std;

int max_in_bin_tree(node *n)
{
    if (!n)
        return INT_MIN;

    return max(n->val, max(max_in_bin_tree(n->left), max_in_bin_tree(n->right)));
}

int main()
{
    node *root = tempBinaryTree();
    cout << max_in_bin_tree(root);
}