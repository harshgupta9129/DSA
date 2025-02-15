#include<bits/stdc++.h>
using namespace std;

// Alway Default Argument is From right to left
void print(int arr[], int n, int start = 0) {
    for ( ; start<n ; start++) {
        cout<<arr[start]<<" ";
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    print(arr,n);
    cout<<endl;
    print(arr,n,4);
    return 0;
}