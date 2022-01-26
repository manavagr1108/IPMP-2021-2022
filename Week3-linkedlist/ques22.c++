// Pairwise swap elements of a given linked list
#include <bits/stdc++.h>
using namespace std;
int size = 0 ,even = 0;
struct node
{
    int data;
    struct node *next;
} * head, *ptr ;
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
    if(n%2 == 0) even++;
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
void swapPair()
{
   node * ptr = head;
   node * ptr2 = head->next;
   int temp = 0;
   while(ptr2!= NULL) 
   {
       temp = ptr->data;
       ptr->data = ptr2->data;
       ptr2->data = temp;
       if(ptr2->next == NULL){
           return;
       }
       ptr=ptr2->next;
       ptr2=ptr->next;
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

int main()
{
    int c;
    cout << "Enter choice :" << endl;
    cout << "1.Insert element" << endl;
    cout << "2.To swapPair list" << endl;
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
            swapPair();
            break;
        case 3:
            displayAll();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element" << endl;
        cout << "2.To swapPair list" << endl;
        cout << "3.Display all element in the list" << endl;
        cin >> c;
    }
    return 0;
}