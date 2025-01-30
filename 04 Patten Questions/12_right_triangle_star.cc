#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter The Number of Lines : ";
    cin>>n;
    int i = 1;
    while (i<=n) {
        int j = 1;
        while (j<i) {
            cout<<"  ";
            j++;
        }
        int k = 1;
        while (k<=n-i+1) {
            cout<<'*'<<" ";
            k++;
        }
        i++;
        cout<<endl; 
    }
    return 0;
}