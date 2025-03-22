#include<bits/stdc++.h>
using namespace std;

int main() {
    int num = 5;
    cout<<num<<endl;

    // address of Operator '&' 
    // dereference operator '*'
    int * address = &num;
    cout<<address<<" "<<"-> "<<*address<<endl;

    double d = 4.5;
    double * p1 = &d;
    cout<<"Address id : "<<p1<<endl;
    cout<<"value is : "<<*p1<<endl;

    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is address : "<<sizeof(p1)<<endl;
    cout<<"size of pointer is p1 : "<<sizeof(p1)<<endl;

    return 0;
}