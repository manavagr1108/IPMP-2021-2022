// Write a function to get the intersection point of two Linked Lists
#include <bits/stdc++.h>
using namespace std;
int size = 0, size2 = 0;
struct node
{
    int data;
    int visited = 0;
    struct node *next;
} * head, *head2, *ptr, *tail2;
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
void insert1()
{
    int n;
    cout << "enter the value to be inserted :" << endl;
    cin >> n;
    if (head2 == NULL)
    {
        head2 = createNode(n);
        tail2 = new node;
        tail2 = head2;
        size2++;
    }
    else
    {
        node *ptr1 = createNode(n);
        tail2->next = ptr1;
        tail2 = ptr1;
        size2++;
    }
}
void displayAll()
{
    node *ptr1 = new node;
    ptr1 = head;
    while (ptr1 != NULL && ptr1->visited == 0)
    {
        cout << ptr1->data << " ";
        ptr1->visited++;
        ptr1 = ptr1->next;
    }
    cout << endl;
    ptr1 = head;
    while (ptr1 != NULL)
    {
        if (ptr1->visited == 0)
            continue;
        ptr1->visited--;
        ptr1 = ptr1->next;
    }
}
void displayAll2()
{
    node *ptr1 = new node;
    ptr1 = head2;
    while (ptr1 != NULL && ptr1->visited == 0)
    {
        cout << ptr1->data << " ";
        ptr1->visited++;
        ptr1 = ptr1->next;
    }
    cout << endl;
    ptr1 = head2;
    while (ptr1 != NULL)
    {
        if (ptr1->visited == 0)
            continue;
        ptr1->visited--;
        ptr1 = ptr1->next;
    }
}
void findIntersection()
{
    node *ptr1 = head;
    node *ptr2 = head2;
    while (ptr1 != NULL && ptr1->visited == 0)
    {
        ptr1->visited++;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        if (ptr2->visited != 0)
        {
            cout << "the lists contains intersection" << endl;
            return;
        }
        ptr2->visited++;
        ptr2 = ptr2->next;
    }
    cout << "the list does not contain intersection" << endl;
    ptr1 = head;
    while (ptr1 != NULL)
    {
        if (ptr1->visited == 0)
            continue;
        ptr1->visited--;
        ptr1 = ptr1->next;
    }
    ptr2 = head2;
    while (ptr2 != NULL)
    {
        if (ptr2->visited == 0)
            continue;
        ptr2->visited--;
        ptr2 = ptr2->next;
    }
    return;
}
int main()
{
    int c;
    cout << "Enter choice :" << endl;
    cout << "1.Insert element in list 1"
         << " ";
    cout << "2.display element in list 1"
         << " ";
    cout << "3.Insert element in list 2"
         << " ";
    cout << "4.display element in list 2"
         << " " << endl;
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
            insert1();
            break;
        case 4:
            displayAll2();
            break;
        case 5:
            findIntersection();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element in list 1"
             << " ";
        cout << "2.display element in list 1"
             << " ";
        cout << "3.Insert element in list 2"
             << " ";
        cout << "4.display element in list 2"
             << " ";
        cout << "5.to check if the two lists contains intersection" << endl;
        cin >> c;
    }
    return 0;
}