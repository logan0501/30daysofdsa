#include "bits/stdc++.h"
using namespace std;

//Logic - two pointers, one moves fast and other slow,when fast pointers is at the end slow pointer will be at the middle of the list.

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
	Node* temp =new Node(key);
	if(head==NULL){
	    return temp;
	}
	Node* p = head;
	Node* q = head;
	while(q && q->next){
	   
	    q=q->next->next;
	    
	    if(q==NULL){
	        break;
	    }
	    p=p->next;
	    
	}
    temp->next=p->next;
	p->next=temp;
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

