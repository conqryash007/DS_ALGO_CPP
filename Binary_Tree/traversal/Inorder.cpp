#include <iostream>
#include <stack>
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

// INORDER RECURSIVE SOLUTION

void inorderRecur(node *n)
{
    if (!n)
        return;
    inorderRecur(n->left);
    cout << n->val << " ";
    inorderRecur(n->right);
}

// INORDER ITERRATIVE SOLUTION

void inorderIter(node *n)
{
    stack<node *> stk;
    node *curr = n;
    while (curr != NULL || stk.empty() == false)
    {
        while (curr)
        {
            stk.push(curr);
            curr = curr->left;
        }
        curr = stk.top();
        stk.pop();
        cout << curr->val << " ";
        curr = curr->right;
    }
}

int main()
{
    node *root = tempBinaryTree();
    inorderRecur(root);
    cout << endl;
    inorderIter(root);
}
