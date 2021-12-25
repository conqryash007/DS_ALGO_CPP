#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *right;
    node *left;

    node(int v)
    {
        val = v;
        right = NULL;
        left = NULL;
    }
};

node *tempBinaryTree()
{
    node *root = new node(1);
    root->right = new node(3);
    root->left = new node(15);

    root->left->left = new node(21);
    root->right->left = new node(33);
    root->right->right = new node(45);
    return root;
}

void inorder(node *n)
{
    if (!n)
        return;
    inorder(n->left);
    cout << n->val << " ";
    inorder(n->right);
}

int main()
{
    node *root = tempBinaryTree();
    inorder(root);
}
