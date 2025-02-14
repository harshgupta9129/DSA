#include<bits/stdc++.h>
using namespace std;

// Jaggered Array
int main() {
    int m;
    cout<<"Enter The Number of Rows : ";
    cin>>m;
    int * col = new int[m];
    cout<<"Enter The Number of Coloums Of Each Row : ";
    for (int i=0; i<m; i++) {
        cin>>col[i];
    }
    int **arr = new int *[m];
    for (int i=0; i<m; i++) {
        arr[i] = new int[col[i]];
    }
    for (int i=0; i<m; i++) {
        cout<<"Enter "<<col[i]<<" Element of row No. "<<i+1<<" : ";
        for (int j=0; j<col[i]; j++) {
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<col[i]; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}