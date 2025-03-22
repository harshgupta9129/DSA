#include<bits/stdc++.h>
using namespace std;

bool isAlphanumeric(char c) {
    return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool checkPalindrome(string s) {
    int i = 0, j = s.size() - 1;

    while (i < j) {
        // Ignore non-alphanumeric characters
        while (i < j && !isAlphanumeric(s[i])) i++;
        while (i < j && !isAlphanumeric(s[j])) j--;

        // Convert to lowercase for case insensitivity
        if (tolower(s[i]) != tolower(s[j])) 
            return false;

        i++;
        j--;
    }
    return true;
}

int main() {
    string name;
    cin>>name;
    cout<<checkPalindrome(name)<<endl;
    return 0;
}