#include<bits/stdc++.h>
using namespace std;
//Approcah: making note of increasing sequence and find maximum among pre-existing maximum and new counted number.
int lengthoflcis(int nums[],int n){
    int maxe=1,count=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                count++;
            }else{
                maxe=max(maxe,count);
                count=1;
            }
            
        }
        return max(maxe,count);
}
int main(){
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=lengthoflcis(arr,n);
    cout<<"Length of Longest common subsequence is "<<l;
    return 0;
}