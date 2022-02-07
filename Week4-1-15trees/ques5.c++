// Write Code to Determine if Two Trees are Identical
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
int findIdentical(node *root1, node *root2)
{
    if(root1 == NULL && root2 == NULL) return 1;
    if (root1 != NULL && root2 != NULL)
    {
        if (root1->data == root2->data && findIdentical(root1->left, root2->left) &&
            findIdentical(root1->right, root2->right))
        {

            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    node *root1 = createNode(1);
    node *root2 = createNode(1);
    root1->left = createNode(2);
    root1->right = createNode(3);
    root1->left->left = createNode(4);
    root1->left->right = createNode(5);

    root2->left = createNode(2);
    root2->right = createNode(3);
    root2->left->left = createNode(4);
    root2->left->right = createNode(5);
    if (findIdentical(root1, root2))
        cout << "Both the trees are Identical";
    else
        cout << "Both the trees are not is Identical";
    return 0;
}