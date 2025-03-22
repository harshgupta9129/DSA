#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter The Number of Lines : ";
    cin>>n;
    int i = 1;
    while (i<=n) {
        {
            int j = 1;
            while(j<=n-i) {
                cout<<"  ";
                j++;
            }
        }
        {
            int j = 1;
            while (j<=i) {
                cout<<j++<<" ";
            }
        }
        {
            int j = i-1;
            while (j>=1) {
                cout<<j--<<" ";
            }
        }
        i++;
        cout<<endl;
    }
    return 0;
}