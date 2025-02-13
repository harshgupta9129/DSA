#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    char ch[] = "abcde";
    cout<<arr<<endl;
    cout<<ch<<endl; // Character Array is Not same as Int array

    char *c = &ch[0];
    // Prints Entire String
    cout<< c<<endl;

    char N = 'a';
    char *p = &N;
    cout<<p<<endl;


    return 0;
}