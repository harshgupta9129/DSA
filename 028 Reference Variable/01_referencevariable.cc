#include<bits/stdc++.h>
using namespace std;

void update2(int &n) {
    n++;
}

void update1(int n) {
    n++;
}
int main() {
    // int i= 5;
    // int & j = i;
    // cout<<i<<" "<<j<<endl;
    // i++;
    // cout<<i<<" "<<j<<endl;
    // j++;
    // cout<<i<<" "<<j<<endl;

    int n = 5;
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;
    return 0;
}