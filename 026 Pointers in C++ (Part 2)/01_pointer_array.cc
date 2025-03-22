#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Address of First Memory Block is : "<<arr<<endl;

    // Bu Using & Operator
    int * ptr = arr;
    cout<<"Address of First Memory Block is : "<<&arr[0]  <<endl;
    cout<<"1st Element : "<<*(ptr++)<<endl;
    cout<<"2nd Element : "<<*(ptr++)<<endl;
    cout<<"3rd Element : "<<*(ptr++)<<endl;
    cout<<"4th Element : "<<*(ptr++)<<endl;

    for (int i=0; i<10; i++) {
        cout<<*(i+arr)<<" ";
    }
    cout<<endl;

    cout<<"The Size of Array is "<<sizeof(arr)<<endl;
    cout<<"Size of Address Of Array is : "<<sizeof(&arr)<<endl;
     
    return 0;
}