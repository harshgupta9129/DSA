#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int s = 0, e = m * n - 1;
    
    while (s <= e) { 
        int mid = s + (e - s) / 2;
        int row = mid / n;
        int col = mid % n;
        
        if (matrix[row][col] == target) return true;
        if (matrix[row][col] < target) s = mid + 1;
        else e = mid - 1;
    }
    
    return false;
}

int main() {
    vector <vector <int> > matrix = {{1,3,5,7},{10,11,16,20},{23,30,43,60}};
    cout<<searchMatrix(matrix,60);
    return 0;
}