#include<bits/stdc++.h>
using namespace std;
// Problem description - Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.
void generatebinarynumber(int n){
    queue<string> q;
    q.push("1");
    while(n--){
        string curr=q.front();
        cout<<curr<<endl;
        q.pop();
        q.push(curr+"0");
        q.push(curr+"1");
    }
}

int main(){
    int n;
    cin>>n;
    generatebinarynumber(n);
    return 0;
}