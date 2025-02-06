#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter A Number of Lines : ";
    cin>>n;
    int i = 0;
    while (i!=n) {
        int j = 0;
        while (j!=n) {
            cout<<j+1<<" ";
            j++;
        }
        i++;
        cout<<"\n";
    }
    return 0;
}