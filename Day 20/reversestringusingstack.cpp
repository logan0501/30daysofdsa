#include <bits/stdc++.h>
using namespace std;

void reverse(string s, int len)
{   
        stack<int> st;
        for (int i = 0; i < len; i++)
        {
            st.push(s[i]);
        }

    for (int i = 0; i < len; i++)
    {
        s[i] = st.top();
        st.pop();
    }
    for(char c:s){
        cout<<c;
    }
    
}
int main()
{   
    string s="GeeksforGeeks";
    reverse(s,13);
    return 0;
}