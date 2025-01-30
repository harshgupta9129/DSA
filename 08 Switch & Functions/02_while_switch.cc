#include<iostream>
using namespace std;
int main() {
    int num = 1;
    while(2) {
        switch(num) {
            case 0: cout<<"Zero\n";
                break;
            case 1: cout<<"One\n";
                break;
            default : cout<<"Default Case\n";
                break;
        }
    }    
    return 0;
}