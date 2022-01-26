// Union and Intersection of two Linked Lists
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
} * head1, *head2, *Union, *intersection, *tail1, *tail2, *Union_tail, *intersection_tail;
int size1 = 0, size2 = 0, size3 = 0;
node *createNode(int data)
{
    node *ptr1 = new node;
    ptr1->data = data;
    ptr1->next = NULL;
    return ptr1;
}
node *insert(node *&head, node *&tail, int size)
{
    int n;
    cout << "enter the value to be inserted :" << endl;
    cin >> n;
    if (head == NULL)
    {
        head = createNode(n);
        tail = new node;
        tail = head;
        size++;
    }
    else
    {
        node *ptr1 = createNode(n);
        tail->next = ptr1;
        tail = ptr1;
        size++;
    }
    return head;
}
node * insertData(node *&head, node *&tail, int data){
    if (head == NULL)
    {
        head = createNode(data);
        tail = new node;
        tail = head;
    }
    else
    {
        node *ptr1 = createNode(data);
        tail->next = ptr1;
        tail = ptr1;
    }
    return head;
}
void displayList(node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    node *ptr1 = new node;
    ptr1 = head;
    while (ptr1 != NULL)
    {
        cout << ptr1->data << endl;
        ptr1 = ptr1->next;
    }
}
node *Union_list(node *&head1, node *&head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    while (ptr1 != NULL)
    {
        Union = insertData(Union, Union_tail, ptr1->data);
        ptr1 = ptr1->next;
    }
    ptr1 = Union;
    while (ptr2 != NULL)
    {
        while (ptr1 != NULL)
        {
            if (ptr1->data == ptr2->data)
            {
                ptr2 = ptr2->next;
                break;
            }
            else
            {
                ptr1 = ptr1->next;
                continue;
            }
        }
        if (ptr1 == NULL)
        {
            Union = insertData(Union, Union_tail, ptr2->data);
            ptr2 = ptr2->next;
        }
    }
    cout << "Union list is: " << endl;
    displayList(Union);
    return Union;
}
node *intersection_list(node *&head1, node *&head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *ptr3 = Union;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data == Union->data)
        {
            ptr1 = ptr1->next;
            Union = Union->next;
            continue;
        }
        else if (ptr2->data == Union->data)
        {
            ptr2 = ptr2->next;
            Union = Union->next;
            continue;
        }
        else
        {
            intersection = insertData(intersection, intersection_tail, Union->data);
            continue;
        }
    }
    cout << "Intersection List is: " << endl;
    displayList(intersection);
    return intersection;
}
int main()
{
    int c;
    cout << "Enter a choice: " << endl;
    cout << "1.To insert a new node in list 1: " << endl;
    cout << "2.To insert a new node in list 2: " << endl;
    cout << "3.Display list 1: " << endl;
    cout << "4.Display list 2: " << endl;
    cout << "5.To find the Union of lists" << endl;
    cout << "6.To find the Intersection of lists" << endl;
    cin >> c;
    while (c)
    {
        switch (c)
        {
        case 1:
            head1 = insert(head1, tail1, size1);
            break;
        case 2:
            head2 = insert(head2, tail2, size2);
            break;
        case 3:
            displayList(head1);
            break;
        case 4:
            displayList(head2);
            break;
        case 5:
            Union = Union_list(head1, head2);
            break;
        case 6:
            intersection = intersection_list(head1, head2);
        }
        cout << "Enter a choice: " << endl;
        cout << "1.To insert a new node in list 1: " << endl;
        cout << "2.To insert a new node in list 2: " << endl;
        cout << "3.Display list 1: " << endl;
        cout << "4.Display list 2: " << endl;
        cout << "5.To find the Union of lists" << endl;
        cout << "6.To find the Intersection of lists" << endl;
        cin >> c;
    }
    return 0;
}