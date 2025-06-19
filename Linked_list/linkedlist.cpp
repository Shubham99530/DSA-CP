#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

node* insert_at_head(node* head, int val)
{
    node* temp = new node(val);
    if(head == NULL)
    {
        return temp;
    }
    temp->next = head;
    return temp;
}
node* insert_at_tail(node* head, int value)
{
    node* temp = head;
    node* Node = new node(value);
    if(head == NULL)
    {
        return Node;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = Node;
    return head;
}
node* delete_at_head(node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    head = head->next;
    return head;
}

node* delete_at_tail(node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    node* temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}
int main()
{
    node* head = NULL;
    head = insert_at_head(head, 10);
    head = insert_at_head(head, 20);
    head = insert_at_tail(head, 30);
    node* temp = head;
    // Printing the linked list
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    delete_at_head(head);
    delete_at_tail(head);
    return 0;
}