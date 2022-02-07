// Connect nodes at same level using constant extra space
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
void PrintSpiral(node *root)
{
    queue<node *> q;
    stack<node *> s;
    int temp = 0, temp2 = 1;
    q.push(root);
    s.push(root);
    while (!q.empty())
    {
        node *ptr = q.front();
        cout << ptr->data;
        q.pop();
        s.pop();
        if (temp2 % 2 != 0)
        {
            if (ptr->left != NULL)
            {
                q.push(ptr->left);
            }
            if (ptr->right != NULL)
            {
                q.push(ptr->right);
            }
        }
        else
        {
            if (ptr->right != NULL)
            {
                q.push(ptr->right);
            }
            if (ptr->left != NULL)
            {
                q.push(ptr->left);
            }
        }
        temp+=2;
        int power = pow(2,temp2);
        if(power == temp){
            temp2++;
        }
    }
}

int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(7);
    root->left->right = createNode(6);
    root->right->left = createNode(5);
    root->right->right = createNode(4);
    PrintSpiral(root);
    return 0;
}