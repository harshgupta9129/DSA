#include<bits/stdc++.h>
using namespace std;

int main() {
    // Segementation Fault
    // int *p = 0;
    // cout<<*p<<endl; 

    int i = 5;
    int *p = 0;
    p = &i;
    cout<<"Address is "<<p<<" And Value At this is "<<*p<<endl;

    int num = 5;
    int *ptr = &num;

    (*ptr)++;
    cout<<"The Value Of Num is Changed : "<<num<<endl;
}