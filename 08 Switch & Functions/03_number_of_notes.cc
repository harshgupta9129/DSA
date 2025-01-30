#include<iostream>
using namespace std;
int main() {
    int totalamount = 1330;
    switch (1) {
        case 1: cout<<"No of Notes of 100 Rupees is "<<totalamount/100<<endl;
        case 2: cout<<"No of Notes of 100 Rupees is "<<(totalamount%100)/20<<endl;
        case 3: cout<<"No of Notes of 100 Rupees is "<<((totalamount%100)%20)/10<<endl;
    }
    return 0;
}