// Find a triplet from three linked lists with sum equal to a given number
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
void FindTriplet()
{
    node *ptr1 = head;
    node *ptr2 = ptr1->next;
    node *ptr3 = ptr2->next;
    int n, t1, t2, t3;
    cout << "Enter the value :";
    cin >> n;
    while (ptr1 != NULL)
    {
        while (ptr2 != NULL)
        {
            while (ptr3 != NULL)
            {
                if (ptr3->data + ptr1->data + ptr2->data == n)
                {
                    cout << ptr1->data << " " << ptr2->data << " " << ptr3->data << endl;
                    return;
                }
                else
                {
                    ptr3 = ptr3->next;
                }
            }
            ptr2 = ptr2->next;
            ptr3 = ptr2->next;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr1->next;
    }

    cout << "No pair found" << endl;
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
    cout << "2.To FindTriplet in list" << endl;
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
            FindTriplet();
            break;
        case 3:
            displayAll();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element" << endl;
        cout << "2.To FindTriplet in list" << endl;
        cout << "3.Display all element in the list" << endl;
        cin >> c;
    }
    return 0;
}