#include<bits/stdc++.h>
using namespace std;

int largest_row_sum (int m,int n,int arr[][4]) {
    int ans = -1;
    int sum = arr[0][0];
    for (int i=0; i<m; i++) {
        int sumr = 0;
        for (int j=0; j<n; j++) {
            sumr+=arr[i][j];            
        }
        if (sumr>sum) {
            sum = sumr;
            ans = i;
        }
    }
    return ans;
}

int main() {
    int arr[3][4]={10,4,6,4,8,5,8,6,5,4,1,2};
    int ans = largest_row_sum(3,4,arr);
    cout<<"The Largest Row Sum is : "<<ans<<endl;
    return 0;
}