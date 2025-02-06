#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter A Binary Number : ";
    cin>>n;
    int power2 = 1;
    int sum = 0;
    while(n!=0) {
        int bit = n%10;
        n/=10;
        sum = power2*bit + sum;
        power2*=2;
    }
    cout<<sum<<endl;
    return 0;
}