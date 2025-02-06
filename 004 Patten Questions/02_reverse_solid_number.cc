#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter The Number of Lines : ";
    cin>>n;
    int i = 1;
    while (i<=n) {
        int j = n;
        while (j>=1) {
            cout<<j--<<" ";
        }
        cout<<endl;
        i++;
    }
    return 0;
}