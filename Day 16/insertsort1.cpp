#include<bits/stdc++.h>
using namespace std;
//link for the question - https://www.hackerrank.com/challenges/insertionsort1/problem
void insertionSort1(int n, vector<int> arr) {
    int data = arr[arr.size()-1]; 
        for(int i = n-2; i>=0; i--){
            if(arr[i] > data){
                arr[i+1]= arr[i];
                for(int j : arr) cout<<j<<" ";
                cout<<endl;
                arr[i]= data;
            }
        }
        for(int j : arr) cout<<j<<" ";
}

int main(){
    vector<int> v ={2,4,6,8,3};
    insertionSort1(5,v);
    return 0;
}