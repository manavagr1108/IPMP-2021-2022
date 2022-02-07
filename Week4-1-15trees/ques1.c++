// Write a program to Calculate Size of a tree | Recursion
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node * left , * right;
};
node * createNode (int data){
    node * p = new node;
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int findSize(node * root){
    int size = 0 ;
    if(root == NULL) return 0;
    if(root!=NULL)size++;
    size += findSize(root->left);
    size += findSize(root->right);
    return size;
}
int main(){
    node * root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    int size = findSize(root);
    cout<<size;
    return 0;
}