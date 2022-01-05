#include <iostream>
#include "Node_class.cpp"
#include <queue>
using namespace std;

int maxLev = 0;

void leftViewRecursive(node *n, int level = 1)
{
    if (!n)
        return;
    if (level > maxLev)
    {
        cout << n->val << " ";
        maxLev = level;
    }
    leftViewRecursive(n->left, level + 1);
    leftViewRecursive(n->right, level + 1);
}

void leftViewIterative(node *n)
{
    queue<node *> q;
    q.push(n);
    while (q.size() > 0)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();
            if (i == 0)
            {
                cout << curr->val << " ";
            }
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
}

int main()
{
    node *root = tempBinaryTree();
    leftViewRecursive(root);
    leftViewIterative(root);
}