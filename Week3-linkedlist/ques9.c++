// Write a function to get the intersection point of two Linked Lists
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data, visited = 0;
    node *next;
} * head1, *head2, *tail1, *tail2;
int size1 = 0, size2 = 0;
node *createNode(int data)
{
    node *ptr = new node;
    ptr->data = data;
    ptr->visited = 0;
    ptr->next = NULL;
    return ptr;
}
void insertAt(node *head, node *tail, int size)
{
    int data;
    cout << "enter the value to be insterted :" << endl;
    cin >> data;
    if (head == NULL)
    {
        head = createNode(data);
        tail = head;
        size++;
    }
    else
    {
        node *ptr1 = createNode(data);
        tail->next = ptr1;
        tail = ptr1;
        size++;
    }
}
void insert()
{
    cout << "enter 1 if u want to insert in list 1 or enter 2 for other list :" << endl;
    int val;
    cin >> val;
    if (val == 1)
    {
        insertAt(head1, tail1, size1);
    }
    else if (val == 2)
    {
        insertAt(head2, tail2, size2);
    }
    else
    {
        cout << "enter either 1 or 2 :" << endl;
        insert();
    }
}
void setVisist(node *head)
{
    node *ptr = head;
    while (ptr->next != NULL && ptr->visited == 1)
    {
        ptr->visited = 0;
        ptr = ptr->next;
    }
    ptr->visited = 0;
}
void displayAll(node *head)
{
    node *ptr1 = head;
    while (ptr1->next != NULL && ptr1->visited == 0)
    {
        cout << ptr1->data << " ";
        ptr1->visited = 1;
        ptr1 = ptr1->next;
    }
    cout << ptr1->data << endl;
    ptr1->visited = 1;
    setVisist(head);
}
void display()
{
    cout << "enter 1 if u want to display the list 1 or enter 2 for other list :" << endl;
    int val;
    cin >> val;
    if (val == 1)
    {
        displayAll(head1);
    }
    else if (val == 2)
    {
        displayAll(head2);
    }
    else
    {
        cout << "enter either 1 or 2 :" << endl;
        display();
    }
}
int main()
{
    int c;
    cout << "Enter choice :" << endl;
    cout << "1.Insert element"
         << " ";
    cout << "2.display element"
         << " ";
    // cout << "3.Find Middle Element" << endl;
    cin >> c;
    while (c)
    {
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            displayAll(head1);
            break;
            // case 3:
            //     findMiddle();
            //     break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element"
             << " ";
        cout << "2.display element"
             << endl;
        // cout << "3.Find Middle Element" << endl;
        cin >> c;
    }
    return 0;
}