#include<iostream>
using namespace std;
void evenodd (int num) {
    if (num%2==0) cout<<"even";
    else cout<<"odd";
}
int main() {
    int num;
    cin>>num;
    cout<<"Given Number is ";
    evenodd(num);
    cout<<endl;
    return 0;
}