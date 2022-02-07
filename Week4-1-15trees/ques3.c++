// Diameter of a Binary Tree
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
int findDia(node *root)
{
    if(root == NULL) return -1;
    int hl = findHeight(root->left) + 1;
    int hr = findHeight(root->right) + 1;
    int maxdia=max(findDia(root->left),findDia(root->right));
    return max(maxdia, hl+hr+1);
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->right->left = createNode(6);
    root->right->left->left = createNode(4);
    // root->left->right = createNode(5);
    // root->left->left->left = createNode(8);
    // root->left->left->right = createNode(9);
    root->right->right = createNode(10);
    root->right->right->right = createNode(11);
    root->right->right->right->left = createNode(12);
    root->right->right->right->left->left = createNode(13);
    int Diameter = findDia(root);
    cout << Diameter << endl;
    return 0;
}