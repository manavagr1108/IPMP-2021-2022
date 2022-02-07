// Level Order Binary Tree Traversal
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
void levelOrdering(node * root){
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        node * p = q.front();
        cout<<p->data<<" ";
        q.pop();
        if(p->left != root){
            q.push(p->left);
        }
        if(p->right != root){
            q.push(p->right);
        }
    }
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    levelOrdering(root);
    return 0;
}