#include<bits/stdc++.h>
using namespace std;
//recursive implementation using structures.
typedef struct Node{
    int data;
    struct Node * next;
    Node(int x){
        data = x;
        next=NULL;
    }
}Node;

//delete alternative nodes function
Node* deletealt( Node* temp){
    if(temp==NULL || temp->next==NULL){
        return NULL;
    }
    temp->next = deletealt(temp->next->next);
    return temp;
}
//function for printing elements
void printList(Node* temp){
     Node* head=temp;
   
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

}
int main(){
    //linkedlist : 1->2->3->4->5->6->NULL
    Node* first = new Node(1);
    first->next=new Node(2);
    first->next->next=new Node(3);
    first->next->next->next=new Node(4);
    first->next->next->next->next=new Node(5);
    first->next->next->next->next->next=new Node(6);
    cout<<"Printing list before deleting alternatives"<<endl;
    printList(first);
    first = deletealt(first);
    cout<<"Printing list after deleting alternatives"<<endl;
    printList(first);
    return 0;
}