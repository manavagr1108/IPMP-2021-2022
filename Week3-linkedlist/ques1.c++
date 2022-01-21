// Given a Linked List and a number n, write a function that returns the value at the n’th node from the end of the Linked List.
#include <bits/stdc++.h>
using namespace std;
int size = 0;
struct node
{
    int data;
    struct node *next;
} * head, *ptr;
node *createNode(int n)
{
    node *ptr1 = new node;
    ptr1->data = n;
    ptr1->next = NULL;
    return ptr1;
}
void insert()
{
    int data;
    cout << "enter the value to be inserted :" << endl;
    cin >> data;
    if (head == NULL)
    {
        head = createNode(data);
        ptr = new node;
        ptr = head;
        size++;
    }
    else
    {
        node *ptr1 = createNode(data);
        ptr->next = ptr1;
        ptr = ptr1;
        size++;
    }
}
void display()
{
    cout << "enter the n'th pos to be displayed :" << endl;
    node *ptr1 = new node;
    ptr1 = head;
    int n;
    cin >> n;
    for (int i = 0; i < size + 1 - n; i++)
    {
        ptr1 = ptr1->next;
    }
    cout << ptr1->data << endl;
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
    cout << "2.display the n'th node from the list" << endl;
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
            display();
            break;
        case 3:
            displayAll();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element" << endl;
        cout << "2.display the n'th node from the last" << endl;
        cout << "3.Display all element in the list" << endl;
        cin >> c;
    }
    return 0;
}