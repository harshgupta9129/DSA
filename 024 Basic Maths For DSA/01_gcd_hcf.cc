//Euclid's Algo
#include<bits/stdc++.h>
using namespace std;

int hcf(int a,int b) {
    int max = 0;
    while (a!=0 && b!=0) {
        if (a>b) {
            a = a%b;
        }
        else {
            b = b%a;
        }
    }
    if (a!=0) return a;
    return b;
}
int main() {
    cout<<hcf(4,15);
    return 0;
}