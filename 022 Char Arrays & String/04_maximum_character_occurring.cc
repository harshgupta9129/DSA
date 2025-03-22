#include<bits/stdc++.h>
using namespace std;

char maxChar(string s) {
    vector <int> ch(256,0);
    int maxindex = 0;
    for (int i=0; i<s.length(); i++) {
        ch[s[i]]++;
        if (ch[maxindex]<ch[s[i]]) maxindex=s[i];
    }
    return maxindex;
}

int main() {
    string s = "testsample";
    cout<<maxChar(s)<<endl;
    return 0;
}