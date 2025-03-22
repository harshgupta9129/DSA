#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int row = matrix.size()-1,col = matrix[0].size()-1;
    for (int j=0; j<=col; j++) {
        int i=0,k=row;
        while(i<k) {
            int temp = matrix[i][j];
            matrix[i++][j] = matrix[k][j];
            matrix[k--][j] = temp;
        }
    }
    for (int i=0; i<=row; i++) {
        for (int j=0; j<=col; j++) {
            if (i<j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp; 
            }
        }
    }
}

int main() {
    vector <vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}