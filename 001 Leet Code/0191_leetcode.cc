#include<iostream>
using namespace std;
int hammingWeight(int n) {
    char string[31]="";
    int i=0;
    while(2) {
        if (n%2==0) {
            string[i++]='0';
            n/=2;
        }
        else {
            string[i++]='1';
            n/=2;
        }
        if (n==1||n==0) {
            string[i++]=n+48;
            break;
        }
    }
    int count = 0;
    for (int i=0; string[i]!=0; i++) {
        if (string[i]=='1') count++; 
    }
    // int count = 0;
    // while (n!=0) {
    //         if (n&1) count++;
    //         n=n>>1;
    //     }
    return count;
}
int main() {
    int n[3]={11,128,2147483645};
    for (int i=0; i<3; i++) {
        cout<<hammingWeight(n[i])<<endl;
    }
    return 0;
}