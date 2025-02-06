#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter Value of n : ";
    cin>>n;
    int sum = 0;
    while(n!=0) {
        sum+=(n--);
    }
    cout<<"The Sum of First n Natural Number is : "<<sum<<endl;
    return 0;
}