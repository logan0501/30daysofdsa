#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
}Node;
Node* removeDuplicates(Node* head){
    Node* temp =head;
    Node* p=temp;
    if(!head)return;
    while(temp && temp->next){
        temp=temp->next;
        if(p->data==temp->data){
            p->next=temp->next;
        }else{
           p=p->next;
        }
    }
    return head;
}
int main(){
   Node* first = new Node(1);
   first->next = new Node(1);
   first->next->next = new Node(2);
   first->next->next->next = new Node(3);
   first->next->next->next->next = new Node(3);
    first = removeDuplicates(first);
    return 0;
}