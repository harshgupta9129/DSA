#include<bits/stdc++.h>
using namespace std;
bool isPresent (int m,int n,int arr[][4],int target) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i][j]==target) return true;
        }
    }
    return false;
}

int main() {
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<isPresent(3,4,arr,6)<<endl;
    cout<<isPresent(3,4,arr,13)<<endl;
    return 0;
}