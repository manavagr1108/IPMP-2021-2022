// Merge Sort for Linked Lists
#include <bits/stdc++.h>
using namespace std;
int size = 0;
struct node
{
    int data;
    node *next;
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
node * merge(node *head1 , node *head2){
    node * ptr1 = head1;
    node * ptr2 = head2;
    node * temp1 , * temp2;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->next->data > ptr2->next->data){
            
        }
        else if(ptr1->next->data <= ptr2->next->data){
            
        }
    }
}
node *MergeSort(node *head, int size)
{
    if (head == NULL)
        return head;
    node *start = head;
    node *mid = head;
    for (int i = 0; i < size / 2 - 1; i++)
    {
        mid = mid->next;
    }
    head = MergeSort(head,size/2);
    mid = MergeSort(mid,size/2);
    head = merge(head,mid);
    
}
void displayAll()
{
    if (head == NULL)
    {
        cout << "The list is empty" << endl;
        return;
    }
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
            MergeSort();
            break;
        case 3:
            displayAll();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element" << endl;
        cout << "2.To delete N node after M nodes in a list" << endl;
        cout << "3.Display all element in the list" << endl;
        cin >> c;
    }
    return 0;
}