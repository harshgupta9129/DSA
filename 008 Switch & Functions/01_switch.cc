#include<iostream>
using namespace std;
int main() {
    int num = 2;
    switch(num) {
        case 1: cout<<"First"<<endl;
            break;
        case 2: cout<<"Second"<<endl;
            break;
        default: cout<<"No Any"<<endl;
    }
    num = 3;
    switch(num) {
        case 1: cout<<"First"<<endl;
            break;
        case 2: cout<<"Second"<<endl;
            break;
        default: cout<<"No Any"<<endl;
    }
    return 0;
}