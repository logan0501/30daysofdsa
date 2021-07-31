#include<bits/stdc++.h>
using namespace std;
//Logic:XOR of two same numbers is zero and number XOR 0 is the number so number which occurs odd is the final result.
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