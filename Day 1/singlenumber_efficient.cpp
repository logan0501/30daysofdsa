#include<bits/stdc++.h>
using namespace std;
int singleNumber(int nums[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s^=nums[i];
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter Array size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];}
    int num = singleNumber(arr,n);
    cout<<num;
}