// Tree Traversals (Inorder, Preorder and Postorder)
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
void preOrder(node * root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node * root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void PostOrder(node * root){
    if(root == NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    cout<<"The preOrder Traversal is :"<<endl;
    preOrder(root);
    cout<<endl<<"The inOrder Traversal is :"<<endl;
    inOrder(root);
    cout<<endl<<"The PostOrder Traversal is :"<<endl;
    PostOrder(root);
    return 0;
}