#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter The Number of Lines : ";
    cin>>n;
    int i = 1;
    while (i<=n) {
        int j = 1;
        while (j<=n) {
            cout<<char('A'+j-1)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}