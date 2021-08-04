#include<bits/stdc++.h>
using namespace std;
//this is done in o(1) space and o(n) time
bool validanagram(string s1, string s2){
      int arr[26]={0};
      //this is constant space.
        if(s1.length()!=s2.length()){
            return false;
        }
    for(int i=0;i<s1.length();i++){
        arr[s1[i]-'a']++;
        //we'll get ascii value and find the difference
        arr[s2[i]-'a']--;
    }
    for(int count:arr){
        if(count)return false;
    }
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