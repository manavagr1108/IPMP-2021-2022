// Program to count leaf nodes in a binary tree
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
int coutLeaf(node * root){
    if(!root) return 0;
    static int leaf = 0;
    if(root->left == NULL && root->right == NULL){
        leaf++;
    }
    coutLeaf(root->left);
    coutLeaf(root->right);
    return leaf;
}
int main(){
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    // root->left->left = createNode(7);
    root->left->right = createNode(6);
    root->right->left = createNode(5);
    root->right->right = createNode(4);
    cout<<coutLeaf(root);
    return 0;
}