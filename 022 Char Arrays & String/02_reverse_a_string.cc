#include<bits/stdc++.h>
using namespace std;

void reverse(char *name) {
    int j=0;
    for (j=0; name[j]!='\0'; j++) {};
    j = j-1;
    int i=0;
    while(i<j) {
        int temp = name[i];
        name[i++] = name[j];
        name[j--] = temp;
    } 
}
int main() {
    char name[20];
    cout<<"Enter Your Name : ";
    cin>>name;
    reverse(name);
    cout<<"The Reverse Of Given Name is : "<<name;
    return 0;
}