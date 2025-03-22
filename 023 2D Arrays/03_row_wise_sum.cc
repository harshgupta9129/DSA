#include<bits/stdc++.h>
using namespace std;

vector <int> row_sum (int m,int n,int arr[][4]) {
    vector <int> a;
    for (int i=0; i<m; i++) {
        int sumr = 0;
        for (int j=0; j<n; j++) {
            sumr+=arr[i][j];            
        }
        a.push_back(sumr);
    }
    return a;
}

int main() {
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    vector <int> sum = row_sum(3,4,arr);
    for (int i=0; i<sum.size(); i++) {
        cout<<sum[i]<<" ";
    }
    return 0;
}