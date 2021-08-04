#include<bits/stdc++.h>
using namespace std;
//this uses extraspace but done in o(n) time complexity.
bool validanagram(string s1, string s2){
    unordered_map<char,int> mymap;
    for(int i=0;i<s1.length();i++){
        mymap[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        mymap[s2[i]]--;
        if(mymap[s2[i]]==0){
            mymap.erase(s2[i]);
        }
    }
    if(mymap.size())return false;
    return true;
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