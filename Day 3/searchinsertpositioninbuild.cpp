#include<bits/stdc++.h>
using namespace std;
//using inbuilt function, this method works with log(n) time complexity.
int searchinsertposition(int arr[],int target,int n){
    return lower_bound(arr,arr+n,target)-arr;
}
int main(){

    int n;
    cout<<"Enter array size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target to find";
    cin>>target;
    int result = searchinsertposition(arr,target,n);
    cout<<result;
    return 0;
}