#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter Number of Lines : ";
    cin>>n;
    int i = 1;
    while (i<=n) {
        int k = 1;
        while (k<=n-i) {
            cout<<"  ";
            k++;
        }
        int j = 1;
        while (j<=i) {
            cout<<'*'<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}