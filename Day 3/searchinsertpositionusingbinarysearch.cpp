#include<bits/stdc++.h>
using namespace std;
//using binary search since it is sorted and works in log(n) time complexity.
int searchinsertposition(int arr[],int target,int n){
    int left=0,right=n;
    while(left<right){
        int mid=floor((left+right)/2);
        if(arr[mid]<target){
            left=mid+1;
        }else{
            right=mid;
        }
    }
    return left;
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