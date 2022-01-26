// Swap Kth node from beginning with Kth node from end in a Linked List
#include <bits/stdc++.h>
using namespace std;
int size = 0;
struct node
{
    int data;
    struct node *next;
} * head, *ptr;
node *createNode(int data)
{
    node *ptr1 = new node;
    ptr1->data = data;
    ptr1->next = NULL;
    return ptr1;
}
void insert()
{
    int n;
    cout << "enter the value to be inserted :" << endl;
    cin >> n;
    if (head == NULL)
    {
        head = createNode(n);
        ptr = new node;
        ptr = head;
        size++;
    }
    else
    {
        node *ptr1 = createNode(n);
        ptr->next = ptr1;
        ptr = ptr1;
        size++;
    }
}
void displayAll()
{
    node *ptr1 = new node;
    ptr1 = head;
    while (ptr1->next != NULL)
    {
        cout << ptr1->data << " ";
        ptr1 = ptr1->next;
    }
    cout << ptr1->data << " " << endl;
}
void shiftKPos()
{
    node *ptr1 = head;
    node *ptr2 = head;
    node *ptr3 = head;
    node *ptr4 = head;
    node *ptr5 = head;
    int k;
    cout << "enter the k pos u wanna swap with" << endl;
    cin >> k;
    if (k > 2)
    {
        for (int i = 0; i < k - 2; i++)
        {
            ptr2 = ptr2->next;
        }
        ptr1 = ptr2->next;
    }
    if (k == 2)
        ptr1 = ptr2->next;

    for (int i = 0; i < size - k - 1; i++)
    {
        ptr4 = ptr4->next;
    }
    ptr5 = ptr1->next;
    ptr3 = ptr4->next;
    ptr2->next = ptr3;
    ptr4->next = ptr1;
    ptr1->next = ptr3->next;
    ptr3->next = ptr5;
}
int main()
{
    int n;
    cin >> n;
    while (n)
    {
        insert();
        cin >> n;
    }
    displayAll();
    cout << endl;
    shiftKPos();
    displayAll();
    cout << endl;
}