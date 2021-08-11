#include<bits/stdc++.h>
//Using hashmap to store address of the nodes and checking for their repition
using namespace std;
typedef struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
}Node;
bool detectLoop(Node* head){
    Node* p=head;
    Node* q=head;
    while(q && q->next && p){
        p=p->next;
        q=q->next->next;
        if(p==q){
            return true;
        }
  
    }
    return false;

}
int main(){
    Node* first = new Node(1);
    first->next=new Node(2);
    first->next->next = new Node(3);
    first->next->next->next = new Node(4);
    first->next->next->next->next = new Node(5);
    first->next->next->next->next->next = first->next;
    bool hasloop = detectLoop(first);
    cout<<hasloop;
    
    return 0;
}