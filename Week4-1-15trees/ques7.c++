// Populate Inorder Successor for all nodes
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right, *next;
};
node *createNode(int data)
{
    node *p = new node;
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    p->next = NULL;
    return p;
}
void assignInorderSuccessor(node *root)
{
    static node * prev = NULL;
    if (root == NULL)
        return;
    assignInorderSuccessor(root->right);
    root->next = prev;
    prev = root;
    assignInorderSuccessor(root->left);
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    if (root->next == NULL)
        cout << "The next of " << root->data << " is -1" << endl;
    else
        cout << "The next of " << root->data << " is " << root->next->data << endl;
    inorder(root->right);
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    assignInorderSuccessor(root);
    inorder(root);
    return 0;
}