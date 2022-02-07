// height of a tree
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
node *createNode(int data)
{
    node *p = new node;
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int findHeight(node *root)
{
    if(root == NULL) return -1;
    return (max(findHeight(root->left),findHeight(root->right)) + 1);
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    // root->left->left->left = createNode(8);
    // root->left->left->right = createNode(8);
    int height = findHeight(root);
    cout<<height<<endl;
    return 0;
}