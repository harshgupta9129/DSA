#include<bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {
    int m = s1.length(), n = s2.length();
    if (m>n) return false;
    vector <int> a(26,0);
    for (int i=0; i<m; i++) {
        a[s1[i]-97]++;
    }
    vector <int> b(26,0);
    for (int i=0; i<m; i++) {
        b[s2[i]-97]++;
    }
    if (a==b) return true;
    for (int i=1; i<n-m+1; i++) {
        b[s2[i-1]-97]--;
        b[s2[i+m-1]-97]++;
        if (a==b) return true;
    }
    return false;
}

int main() {
    string s1 = "ab", s2 = "eidbaooo";
    cout<<checkInclusion(s1,s2)<<endl;
    s1 = "ab", s2 = "eidboaoo";
    cout<<checkInclusion(s1,s2)<<endl;
    
    return 0;
}