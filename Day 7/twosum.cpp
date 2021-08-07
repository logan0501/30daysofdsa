#include<bits/stdc++.h>
using namespace std;
void twosum(int numbers[],int target,int n){
    int a[2];
        int l=0,r=n-1;
        while(l<r)
        {
            if(numbers[l]+numbers[r]==target){
                a[0] = l+1;
                a[1] = r+1;
               break;
            }
            else if(numbers[l]+numbers[r]>target)
                r--;
            else
                l++;
        }
     for(int i=0;i<2;i++){
        cout<<a[i];
    }
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
   twosum(arr,target,n);

    return 0;
}