// Given a singly linked list of characters, write a function that returns true if the given list is a palindrome, else false.
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
bool checkPalin()
{
    node *ptr1 = head;
    int arr[size];
    int i = 0;

    while (ptr1->next != NULL)
    {
        arr[i] = ptr1->data;
        i++;
        ptr1 = ptr1->next;
    }
    arr[i] = ptr1->data;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
            return false;
    }
    return true;
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
    cout << "2.To check if the list is palindrome or nt" << endl;
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
            cout << checkPalin();
            break;
        case 3:
            displayAll();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element" << endl;
        cout << "2.To check if the list is palindrome or nt" << endl;
        cout << "3.Display all element in the list" << endl;
        cin >> c;
    }
    return 0;
}