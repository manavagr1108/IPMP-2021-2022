// Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between nodes
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

void reverse()
{
    node *ptr1 = new node;
    node *ptr2 = new node;
    ptr2 = head;
    ptr = head;
    ptr1 = head->next;
    head = head->next;
    ptr2->next = NULL;
    while (head->next != NULL)
    {
        head = head->next;
        ptr1->next = ptr2;
        ptr2 = ptr1;
        ptr1 = head;
    }
    ptr1->next = ptr2;
    ptr2 = ptr1;
    ptr1 = head;
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

int main()
{
    int c;
    cout << "Enter choice :" << endl;
    cout << "1.Insert element" << endl;
    cout << "2.To reverse the list" << endl;
    cout << "3.Display all element in the list" << endl;
    cin >> c;
    while (c)
    {
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            reverse();
            break;
        case 3:
            displayAll();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element" << endl;
        cout << "2.To reverse the list" << endl;
        cout << "3.Display all element in the list" << endl;
        cin >> c;
    }
    return 0;
}