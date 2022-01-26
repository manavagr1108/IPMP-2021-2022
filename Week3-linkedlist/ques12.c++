// Delete alternate nodes of a Linked List
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
void deleteNode()
{
    if (head == NULL)
    {
        cout << "The list is empty" << endl;
        return;
    }
    node *ptr1 = head;
    cout << "enter the pos (0 to " << size - 1 << ") to be deleted :" << endl;
    int pos;
    cin >> pos;
    if (pos == 0)
    {
        ptr1 = head;
        head = head->next;
        if (ptr == head)
            ptr = head;
        free(ptr1);
        size--;
        return;
    }
    if (pos > size - 1)
    {
        cout << "Enter A valid position" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            ptr1 = ptr1->next;
        }
        node *ptr2 = ptr1->next;
        ptr1->next = ptr2->next;
        if (ptr2 == ptr)
        {
            ptr = ptr1;
        }
        free(ptr2);
        size--;
        return;
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

void deleteAlternatives()
{
    int temp = 0;
    if (head == NULL)
    {
        cout << "the list is empty"<<endl;
        return;
    }
    node *ptr1 = head;
    for (int i = 0; i < size; i++)
    {
        if(i == size - 1) return;
        node *ptr2 = ptr1->next;
        ptr1->next = ptr2->next;
        if (ptr2 == ptr)
        {
            ptr = ptr1;
        }
        free(ptr2);
        size--;

        ptr1 = ptr1->next;
    }
}

int main()
{
    int c;
    cout << "Enter choice :" << endl;
    cout << "1.Insert element" << endl;
    cout << "2.To delete a node list" << endl;
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
            deleteNode();
            break;
        case 3:
            displayAll();
            break;
        case 4:
            deleteAlternatives();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element" << endl;
        cout << "2.To delete a node list" << endl;
        cout << "3.Display all element in the list" << endl;
        cout << "4.Delete alternative nodes in the list" << endl;
        cin >> c;
    }
    return 0;
}