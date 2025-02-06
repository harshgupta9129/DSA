#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    int b = 0;
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            b=1;
            break;
        }
    }
    if (b==1) cout<<"Not Prime Number\n";
    else cout<<"Prime Number\n";
    return 0;
}