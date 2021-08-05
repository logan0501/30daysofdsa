#include<bits/stdc++.h>
using namespace std;
void movezeros(int arr[],int n){
    int notazero=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[notazero++]=arr[i];
        }
    }
    while(notazero<n){
        arr[notazero++]=0;
    }
}
int main(){
    int n;
    cout<<"Enter n value";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movezeros(arr,n);
    return 0;
}