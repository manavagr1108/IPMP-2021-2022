// Write a program to Delete a Tree
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
void deleteTree(node *root){
    if(root == NULL) return;
    deleteTree(root->left);
    deleteTree(root->right);
    cout<<root->data<<"has been deleted"<<endl;
    delete root;
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    deleteTree(root);
    return 0;
}