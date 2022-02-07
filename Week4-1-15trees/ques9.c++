// Connect nodes at same level using constant extra space
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
void connetNext(node * root){
    if(root == NULL) return;
    if(root->left != NULL && root->right != NULL){
        root->left->next = root->right;
    }
    connetNext(root->left);
    connetNext(root->right);
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    connetNext(root);
    cout<<root->next<<endl;
    cout<<root->left->next->data<< endl;
    cout<<root->left->left->next->data<< endl;
    return 0;
}