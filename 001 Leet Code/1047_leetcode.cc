#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
        
    stack<int>st;

    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() || st.top() != s[i])
        {
            st.push(s[i]);
        }
        else 
        {
            if (st.top() == s[i])
            {
                st.pop();
            }
        }
    }
    string ans = "";
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


int main() {
    string s = "abbaca";
    cout<<removeDuplicates(s)<<endl;
    s = "azxxzy";
    cout<<removeDuplicates(s)<<endl;
    return 0;
}