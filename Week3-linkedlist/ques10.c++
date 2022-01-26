// Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed
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
void insertPtr(node *&head, int data)
{
    if (head == NULL)
    {
        head = createNode(data);
        tail3 = new node;
        tail3 = head;
        size3++;
    }
    else
    {
        node *ptr1 = createNode(data);
        tail3->next = ptr1;
        tail3 = ptr1;
        size3++;
    }
}
node *findIntersection()
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    while (ptr1 != NULL || ptr2 != NULL)
    {
        if (ptr1->data == ptr2->data)
        {
            cout << ptr1->data << endl;
            insertPtr(head3, ptr1->data);
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }
        else if (ptr1->data > ptr2->data)
        {
            ptr2 = ptr2->next;
        }
        else
        {
            ptr1 = ptr1->next;
        }
    }
    return head3;
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
void displayIntersection()
{
    if (head3 == NULL)
    {
        cout << "there is no intersection" << endl;
    }
    else
    {
        cout << "the intersection element are";
        node *ptr = head3;
        while (ptr != NULL)
        {
            cout << " " << ptr->data << " ";
            ptr = ptr->next;
        }
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
        cout << "Enter 1 to enter  the data for the second list in sorted order or 0 to find the insertion list" << endl;
        cin >> c;
    }
    displayList(head2);
    head3 = findIntersection();
    displayIntersection();
    return 0;
}