#include "bits/stdc++.h"
//Brute force-counting number of nodes and inserting at the middle of the linked list by traversing again
using namespace std;
typedef struct Node {
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
}Node;
void printList(Node * head){
    Node* temp=head;
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
Node* insertAtMiddle(Node* head,int key){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    int middle = (count-1)/2;
    temp=head;
    while(middle--){
        temp=temp->next; 
    }
    Node* q=new Node(key);
    q->next=temp->next;
    temp->next=q;
    return head;
}
int main(){
    int key;
    Node* first = new Node(1);
    first->next = new Node(2);
    first->next->next=new Node(3);
    first->next->next->next=new Node(4);
    cout<<"Enter value to be inserted";
    cin>>key;
    cout<<"Printing the list before insertion";
    
    printList(first);
    insertAtMiddle(first,key);
    return 0;
}

