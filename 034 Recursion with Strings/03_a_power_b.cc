#include<bits/stdc++.h>
using namespace std;

int power (int a, int b) {
    if (b==1) return a;
    if (b==0) return 1; 
    if (b%2==0) {
        int temp = power (a,b/2);
        return temp*temp;
    }
    else {
        int temp = power (a,b/2);
        return a * temp * temp;
    }
}

int main () {
    int a = 2;
    int b = 10;
    cout<<power(a,b);

    return 0;
}