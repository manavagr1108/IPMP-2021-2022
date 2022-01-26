// Add two numbers represented by linked lists 
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node * next;
};
node *createNode(int data)
{
    node *ptr1 = new node;
    ptr1->data = data;
    ptr1->next = NULL;
    return ptr1;
}
int findLen(node *ptr){
    int size = 0;
    while(ptr != NULL){
        size++;
        ptr = ptr->next;
    }
    return size;
}
int sum(node * head1 , node * head2){
    int temp = 0;
    if(head1 == NULL && head2 == NULL){
        return temp;
    }
    sum(head1->next , head2->next);
    temp = (head1->data + head2->data + temp)%10;
    cout<<temp<<" ";
    temp = temp/10;
}
void findsum( node * head1 , node * head2 , int size1, int size2 ){
    node * ptr1;
    if(size1 == size2){
        sum(head1,head2);
        return;
    }
    else if(size1 > size2){
        ptr1 = head1;
        for (int i = 0; i < size1 - size2 - 1; i++)
        {
            ptr1 = ptr1->next;
        }
        sum(ptr1,head2);
    }
    else{
        ptr1 = head2;
        for (int i = 0; i < size2-size1-1; i++)
        {
            ptr1 = ptr1->next;
        }
        sum(head1, ptr1);
    }
}
int main(){
    node * head1 = createNode(5);
    head1->next = createNode(6);
    head1->next->next = createNode(3);
    node * head2 = createNode(8);
    head2->next = createNode(4);
    head2->next->next = createNode(2);
    int size1 = findLen(head1);
    int size2 = findLen(head2);
    findsum(head1, head2 , size1 , size2);
    return 0;
}