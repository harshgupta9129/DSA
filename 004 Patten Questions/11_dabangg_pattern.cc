#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter The Number of Lines : ";
    cin>>n;
    // for (int i=1; i<=n; i++) {
    //     for (int j=1; j<=n-i+1; j++) cout<<j<<" ";
    //     for (int j=1; j<=2*(i-1); j++) cout<<'*'<<" ";
    //     for (int j=n-i+1; j>=1; j--) cout<<j<<" ";
    //     cout<<endl;
    // }
    int i=1;
    while (i<=n) {
        int j = 1;
        while (j<=n-i+1) cout<<(j++)<<" ";
        int k = 1;
        while (k<=2*(i-1)) {
            cout<<'*'<<" ";
            k++;
        }
        int l=n-i+1;
        while (l>=1) cout<<(l--)<<" ";
        i++;
        cout<<endl;
    }
    return 0;
}