// Find the middle of a given linked list
#include <bits/stdc++.h>
using namespace std;
int size = 0;
struct node
{
    int data;
    int visited = 0;
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
    while (ptr1->next != NULL && ptr1->visited == 0)
    {
        cout << ptr1->data << " ";
        ptr->visited++;
        ptr1 = ptr1->next;
    }
    cout << ptr1->data << " " << endl;
    while (ptr1->next != NULL)
    {
        if (ptr1->visited == 0)
            break;
        ptr1->visited--;
        ptr1 = ptr1->next;
    }
}
void findMiddle()
{
    node *ptr1 = head;
    for (int i = 0; i < size / 2; i++)
    {
        ptr1 = ptr1->next;
    }
    cout << ptr1->data << endl;
    return;
}
int main()
{
    int c;
    cout << "Enter choice :" << endl;
    cout << "1.Insert element"
         << " ";
    cout << "2.display element"
         << " ";
    cout << "3.Find Middle Element" << endl;
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
            findMiddle();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element"
             << " ";
        cout << "2.display element"
             << " ";
        cout << "3.Find Middle Element" << endl;
        cin >> c;
    }
    return 0;
}