// Check if all leaves are at same level
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node * left , * right;
};
node * createNode(int data){
    node * p = new node;
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int lv;
bool recursiveCall(node *root , int l){
    if(root == NULL){
        return true;
    }
    if(!recursiveCall(root->left, l+1)){return false;}
    if(!recursiveCall(root->right, l+1)){return false;}

    if(root->left == NULL && root->right == NULL){
        if(lv==-1){
            lv=l;
        }
        else{
            if(lv!= l){return false;}
        }
    }
    return true;
}
bool check(node * root){
   lv = -1;
   return recursiveCall(root,0);
}
int main(){
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    cout<<check(root);
    return 0;
}