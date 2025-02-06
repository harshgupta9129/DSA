#include<iostream>
#include<limits.h>
using namespace std;
int reverse(int x) {
    long rev = 0;
    while (x!=0) {
        int n = x%10;
        x/=10;
        rev = rev*10+n;
        if (rev>INT_MAX||rev<INT_MIN) return 0;
    }
    return int(rev);
}
int main() {
    int x;
    cout<<"Enter A Number : ";
    cin>>x;
    cout<<reverse(x)<<endl;
    return 0;
}