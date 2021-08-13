#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
void printList(struct Node *temp)
{
    struct Node *head = temp;
    while (head)
    {
        cout << head->data;
        head = head->next;
    }
}
struct Node *insertnode(struct Node *head, int pos, int data)
{
    struct Node *newnode = new Node(data);
    struct Node *temp = head;

    while (pos-- && temp->next)
    {
        temp = temp->next;
    }

    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
int main()
{
    struct Node *first = new Node(1);
    first->next = new Node(2);
    first->next->prev = first;
    first->next->next = new Node(3);
    first->next->next->prev = first->next;
    first->next->next->next = new Node(4);
    first->next->next->next->prev = first->next->next;
    cout << "Linkedlist before insertion" << endl;
    printList(first);
    int pos, data;
    cout << "Enter position and data to be inserted";
    cin >> pos >> data;
    first = insertnode(first, pos, data);
    cout << "Linkedlist after insertion" << endl;
    printList(first);
    return 0;
}