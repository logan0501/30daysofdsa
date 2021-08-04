#include<bits/stdc++.h>
using namespace std;
//sorting both strings and checking both are equal or not.
bool validanagram(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)return true;
    return false;
}
int main(){
    string s1,s2;
    cout<<"Enter string 1";
    cin>>s1;
    cout<<"Enter string 2";
    cin>>s2;
    bool result=validanagram(s1,s2);
    cout<<result;
    return 0;
}