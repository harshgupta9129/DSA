#include<iostream>
using namespace std;
int main() {
    int n;
    printf("Enter A Number : ");
    cin>>n;
    char string[32]="0000000000000000000000000000000";
    int i=30;
    if (n>=0) { while(2) {
        if (n%2==0) {
            string[i--]='0';
            n/=2;
        }
        else {
            string[i--]='1';
            n/=2;
        }
        if (n==1||n==0) {
            string[i--]=n+48;
            break;
        }
    } }
    else {
        n = n * (-1);
        while(2) {
            if (n%2==0) {
                string[i--]='0';
                n/=2;
            }
            else {
                string[i--]='1';
                n/=2;
            }
            if (n==1||n==0) {
                string[i--]=n+48;
                break;
            }
        }
        for (int i=0; i<31; i++) {
            if (string[i]=='1') string[i]='0';
            else string[i]='1';
        }
        if (string[30]=='1') string[30]='0';
        else string[30]='1';
    }
    cout<<string<<endl;
    return 0;
}