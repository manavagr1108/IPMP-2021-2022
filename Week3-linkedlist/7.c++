// Detect and Remove Loop in a Linked List
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
void createLoop()
{
    cout << "Enter the pos (0 to" << size - 1 << ") to where you want your loop to end :" << endl;
    int pos;
    cin >> pos;
    node *ptr1 = head;
    for (int i = 0; i < pos - 1; i++)
    {
        ptr1 = ptr1->next;
    }
    ptr->next = ptr1;
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
void checkLoop()
{
    node *ptr1 = head;
    while (ptr1->next != NULL)
    {
        if (ptr1->visited != 0)
        {
            cout << "the list contains loop" << endl;
            return;
        }
        ptr->visited++;
        ptr1 = ptr1->next;
    }
    while (ptr1->next != NULL)
    {
        if (ptr1->visited == 0)
            break;
        ptr1->visited--;
        ptr1 = ptr1->next;
    }
    cout << "the list doesn't contains loop" << endl;
    return;
}
void removeLoop()
{
    node *ptr1 = head;
    while (ptr1->next != NULL)
    {
        if (ptr1->next->visited != 0)
        {
            ptr->next->next = NULL;
            cout << "The loop has been removed from the list" << endl;
            return;
        }
        ptr1->visited++;
        ptr1 = ptr1->next;
    }
    while (ptr1->next != NULL)
    {
        if (ptr1->visited == 0)
            break;
        ptr1->visited--;
        ptr1 = ptr1->next;
    }
    cout << "There were no loops in the list" << endl;
    return;
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

int main()
{
    int c;
    cout << "Enter choice :" << endl;
    cout << "1.Insert element"
         << " ";
    cout << "2.To delete a node list"
         << " ";
    cout << "3.Display all element in the list"
         << " ";
    cout << "4.To create a loop in list"
         << " ";
    cout << "5.To check for a loop in list"
         << " ";
    cout << "6.To remove loop in list" << endl;
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
            createLoop();
            break;
        case 5:
            checkLoop();
            break;
        case 6:
            removeLoop();
            break;
        }
        cout << "Enter choice :" << endl;
        cout << "1.Insert element"
             << " ";
        cout << "2.To delete a node list"
             << " ";
        cout << "3.Display all element in the list"
             << " ";
        cout << "4.To create a loop in list"
             << " ";
        cout << "5.To check for a loop in list"
             << " ";
        cout << "6.To remove loop in list" << endl;
        cin >> c;
    }
    return 0;
}