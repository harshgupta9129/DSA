#include<bits/stdc++.h>
using namespace std;

string word (int n) {
    if (n==0) return "zero ";
    if (n==1) return "one ";
    if (n==2) return "two ";
    if (n==3) return "three ";
    if (n==4) return "four ";
    if (n==5) return "five ";
    if (n==6) return "six ";
    if (n==7) return "seven ";
    if (n==8) return "eight ";
    if (n==9) return "nine ";
}

void saydigit(int n) {
    if (n<10) {
        cout<<word(n);
        return;
    }
    saydigit(n/10);
    cout<<word(n%10);
}

int main () {
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    saydigit(n);
    return 0;
}