#include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[],int n){
    int profit=0;
    for(int k=1;k<n;k++){
       if(arr[k]>arr[k-1]){
           profit+=arr[k]-arr[k-1];
       }
   }
   return profit;      
}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array elements";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = maxprofit(arr,n);
    cout<<result;
    return 0;
}