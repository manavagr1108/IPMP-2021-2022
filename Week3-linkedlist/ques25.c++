// Merge a linked list into another linked list at alternate positions
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
} * head1, *head2, *head3, *tail1, *tail2, *tail3;
int size1 = 0, size2 = 0, size3 = 0;
node *createNode(int data)
{
    node *ptr1 = new node;
    ptr1->data = data;
    ptr1->next = NULL;
    return ptr1;
}
node *insert(node *&head, node *&tail, int size)
{
    int n;
    cout << "enter the value to be inserted :" << endl;
    cin >> n;
    if (head == NULL)
    {
        head = createNode(n);
        tail = new node;
        tail = head;
        size++;
    }
    else
    {
        node *ptr1 = createNode(n);
        tail->next = ptr1;
        tail = ptr1;
        size++;
    }
    return head;
}
node *MergeLinkedList()
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    node * temp1 , * temp2;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        temp1 = ptr1->next;
        temp2 = ptr2->next;
        ptr1->next = ptr2;
        if(temp1 == NULL){
            return head1;
        }
        ptr2->next = temp1;
        ptr1 = temp1;
        ptr2 = temp2;
    }
    return head1;
}
void displayList(node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    node *ptr1 = new node;
    ptr1 = head;
    while (ptr1 != NULL)
    {
        cout << ptr1->data << endl;
        ptr1 = ptr1->next;
    }
}
int main()
{
    cout << "Enter 1 the data for the first list in sorted order or 0 to go to next list" << endl;
    int c;
    cin >> c;
    while (c)
    {
        head1 = insert(head1, tail1, size1);
        cout << "Enter 1 to enter the data for the first list in sorted order or 0 to go to next list" << endl;
        cin >> c;
    }
    displayList(head1);
    c = 1;
    while (c)
    {
        head2 = insert(head2, tail2, size2);
        cout << "Enter 1 to enter  the data for the second list in sorted order or 0 to merge two list" << endl;
        cin >> c;
    }
    displayList(head2);
    MergeLinkedList();
    cout<<"the merge list is: "<<endl;
    displayList(head1);
    return 0;
}
