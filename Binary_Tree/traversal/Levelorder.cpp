#include <iostream>
#include <queue>
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

void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            // cout << endl;
            q.push(NULL);
            continue;
        }
        cout << curr->val << " ";
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
}

int main()
{
    levelorder(tempBinaryTree());
    return 0;
}