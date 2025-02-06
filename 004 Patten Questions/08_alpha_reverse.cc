#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter Number of Lines : ";
    cin>>n;
    int i = n;
    while (i>=1) {
        int j = 1;
        while (j<=n-i+1) {
            cout<<char('A'+i+j-2)<<" ";
            j++;
        }
        i--;
        cout<<endl;
    }
    return 0;
}