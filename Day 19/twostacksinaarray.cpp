#include<bits/stdc++.h>
using namespace std;
//Problem link - https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1#
//I have only written necessary function.
class twostacks{
    int *arr;
    int size;
    int top1,top2;
    twostacks(int n=100){
        size=n;
        arr=new int[100];
        top1=-1;
        top2=size;
    }
    void push1(int x){
        arr[++top1]=x;
    }
    
    void push2(int x){   
        arr[--top2]=x;
    }
    
    int pop1(){
        return top1 == -1 ? -1 : arr[top1--];
    }

    int pop2(){
        return top2 == size ? -1 : arr[top2++];
    }
};

