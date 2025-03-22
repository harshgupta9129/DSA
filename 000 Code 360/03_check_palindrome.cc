#include<bits/stdc++.h>
using namespace std;
bool ischeck (string& str, int si, int ei) {
    if (si>=ei) return 1;
    if (str[si]!=str[ei]) return 0;
    si++;
    ei--;
    return ischeck(str,si,ei);
}
bool isPalindrome(string& str) {
    int si = 0;
    int ei = 0;
    for (ei=0; str[ei]!=0; ei++) {}
    ei = ei - 1;
    return ischeck(str,si,ei);
}
int main() {
    string str = "racecar";
    cout<<isPalindrome(str);
    return 0;
}