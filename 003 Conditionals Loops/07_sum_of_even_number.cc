#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter The Value Of N : ";
    cin>>n;
    int sum = 0;
    while(n!=0) {
        if (n%2==0) {
            sum+=(n);
        }
        n--;
    }
    cout<<"The Sum of Even Number is : "<<sum;
    return 0;
}