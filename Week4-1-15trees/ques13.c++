// Difference between sums of odd level and even level nodes of a Binary Tree
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
    return p;
}
int levelDiff(node *root){
    if(root == NULL ) return 0;
    return root->data - levelDiff(root->left) - levelDiff(root->right);
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    // root->left->left = createNode(4);
    // root->left->right = createNode(5);
    cout<<levelDiff(root);
    return 0;
}