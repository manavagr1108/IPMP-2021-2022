// reverse the group of list node in a list
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
void reverse(node *&head, node *&tail)
{
    node *ptr1 = new node;
    node *ptr2 = new node;
    node *ptr3 = tail->next;
    ptr2 = head;
    tail = head;
    ptr1 = head->next;
    head = head->next;
    ptr2->next = NULL;
    while (head->next != tail)
    {
        head = head->next;
        ptr1->next = ptr2;
        ptr2 = ptr1;
        ptr1 = head;
    }
    ptr1->next = ptr2;
    ptr2 = ptr1;
    ptr1 = head;
    tail = ptr3;
}

void RotateByKGroup()
{
    if (head == NULL)
    {
        cout << "the list is empty" << endl;
        return;
    }
    int k, temp = 0;
    cout << "enter the the value by which number group u got to rotate the list :" << endl;
    cin >> k;
    node *ptr1 = head;
    node *ptr2 = head;
    node *ptr3;
    for (int i = 0; i < size; i++)
    {
        if (i % k == k - 1)
        {
            ptr3 = ptr1->next;
            reverse(ptr1, ptr2);
            ptr2 = ptr3;
        }
        ptr1 = ptr1->next;
    }
}
int main()
{
    int c;
    cout << "Enter choice :" << endl;
    cout << "1.Insert element" << endl;
    cout << "2.Display all element in the list" << endl;
    cout << "3.Rotate the list by k group node." << endl;
    cin >> c;
    while (c)
    {
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            displayAll();
            break;
        case 3:
            RotateByKGroup();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element" << endl;
        cout << "2.Display all element in the list" << endl;
        cout << "3.Rotate the list by k group node." << endl;
        cin >> c;
    }
    return 0;
}