#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string s){
    stack<char> st;
    for(char i:s){
        if(i=='(' || i== '{' || i=='[')
            st.push(i);
        if(i==')' || i=='}' || i==']'){
           if(!st.empty()){
                char top = st.top();
                st.pop();
                if(top=='(' && i==')' || top=='{' && i=='}' || top=='[' && i==']' )
                    continue;
                else
                    return false;
            }
            else 
                return false;
          }
    }
    if(!st.empty()) 
        return false;
    else
        return true;
}
int main(){
    string s = "{([])}";
    bool result = isValidParenthesis(s);
    cout<<result;
    return 0;
}