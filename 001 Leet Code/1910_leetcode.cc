#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {
    int index = s.find(part);
    while (index!=(-1)) {
        s.erase(index, part.length());
        index = s.find(part);
    }
    return s;
}

int main() {
    string s = "daabcbaabcbc", part = "abc";
    cout<<removeOccurrences(s,part);
    return 0;
}