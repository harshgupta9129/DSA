#include<iostream>
using namespace std;
int main() {
    int i = 1;
    for ( ; ; ) {
        if (i<=5) cout<<i++<<" ";
        else break;
    }
    cout<<endl;

    for (int a=1,b=1; b<5,a<0; a++,b++) { //Loop Always Breaks On Codition of 2nd Valirable
        cout<<a<<" "<<b<<endl;
    }

    //for (statement 1 ; statement 2; statement 3) {
    // statement 4
    // }
    // Sabse pahle ham statement 1 par jate hai uske bad statement 2 agar condition to 
    // statement 4 chalega fir statement 3 par updatation hoga
    return 0;
}