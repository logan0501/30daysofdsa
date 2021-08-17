#include<bits/stdc++.h>
using namespace std;
vector<int> findElements(int a[],int n){
    sort(a,a+n);
    return vector<int>(a,a+n-2);
}
int main(){
    int v[]={2, 8, 7, 1, 5};
    vector<int> result=findElements(v,5);
    for(int i:result){
        cout<<i<<endl;
    }
    return 0;
}