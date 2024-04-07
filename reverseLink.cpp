// Reverse a Linked List: Write a function that takes the head of a linked list as input and returns the head of the reversed linked list.
#include <iostream>
using namespace std;
class node
{
//members will be public as we have to access them in the function
public:
    int data;
    node *next;
//constructor made to provide the arguments
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
//function to reverse the linked list
void reverse(node *&head)
{
    // take three pointers to travel in the linked list
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    // till currptr is not next to the NULL
    while (currptr != NULL)
    {
        // this is to go forward in the list
        nextptr = currptr->next;
        // this one is to reverse the linked list
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    // last node which will be head
    head = prevptr;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
};
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    reverse(head);
    display(head);

    return 0;
}