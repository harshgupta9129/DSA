#include<bits/stdc++.h>
using namespace std;
int getlength(char name[]) {
    int i=0; 
    while(name[i++]!=0) {};
    return i-1;
}
int main() {
    char name[20];
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<getlength(name);
    return 0;
}