#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<string> q;
        q.push("1");
        q.push("2");
        for(int i=1;i<n;i++){
            string curr = q.front();
           
            q.pop();
            q.push(curr+"1");
            q.push(curr+"2");

        }
        cout<<q.front()<<endl;
    }
    return 0;
}