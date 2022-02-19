// Double Tree
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

node * createDouble(node * root){
    if(!root) return NULL;

    node * ptr = createNode(root->data);

    ptr->left = root->left;
    root->left = ptr;

    createDouble(ptr->left);
    createDouble(root->right);
    return NULL;
}

void inorder(node * root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(7);
    root->left->right = createNode(6);
    root->right->left = createNode(5);
    root->right->right = createNode(4);
    cout<<createDouble(root);
    inorder(root);
    return 0;
}