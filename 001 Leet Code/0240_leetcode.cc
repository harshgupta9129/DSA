#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int i = 0;
    int j = n-1;
    while (j>=0 && i<=m-1) {
        if (matrix[i][j]==target) return true;
        if (matrix[i][j]<target) i++;
        else j--;
    }
    return false;
}

int main() {
    vector <vector <int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<searchMatrix(matrix,25);
    return 0;
}