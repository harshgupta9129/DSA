#include<bits/stdc++.h>
using namespace std;

bool ispalindrome (string str,int i, int j) {
    if (i>j) return true;
    if (str[i]!=str[j]) return false;
    return ispalindrome(str,i+1,j-1);
}

int main () {
    string str = "abbccbba";
    int size = str.length();
    if (ispalindrome(str,0,size-1)) {
        cout<<"Given String is Palindrome\n";
    }
    else {
        cout<<"Given String is not Palindrome\n";
    }

    return 0;
}