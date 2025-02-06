#include<iostream>
using namespace std;
int main() {
    int n = 10;
    int a = 1;
    int b = 0;
    int sum = 0;
    for (int i=1; i<=n; i++) {
        b = a;
        a = sum;
        sum = a + b;
        cout<<sum<<" ";
    }
    return 0;
}