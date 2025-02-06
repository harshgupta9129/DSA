#include<iostream>
using namespace std;
bool isprime (int n) {
    bool check = 1;
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            check = 0;
            break;
        }
    }
    return check;
}
int main() {
    int n;
    cin>>n;
    cout<<"The Given Number is orime or not : "<<isprime(n)<<endl;
    return 0;
}