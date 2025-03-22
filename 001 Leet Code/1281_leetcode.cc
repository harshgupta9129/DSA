#include<iostream>
using namespace std;
int subtractProductAndSum(int n) {
    int sum = 0,product = 1;
    while(n!=0) {
        int digit = n%10;
        n/=10;
        sum+=digit;
        product*=digit;
    }
    return (product-sum);
}
int main() {
    int n = 234;
    cout<<subtractProductAndSum(n)<<endl;
    return 0;
}