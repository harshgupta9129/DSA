#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector <int> ans;
    int sr=0, er=matrix.size()-1, sc=0, ec=matrix[0].size()-1;
    while (2) {
        for (int i=sc; i<=ec; i++) {
            ans.push_back(matrix[sr][i]);
        }
        sr++;
        if (sr>er || sc>ec) break;
        for (int i=sr; i<=er; i++) {
            ans.push_back(matrix[i][ec]);
        }
        ec--;
        if (sr>er || sc>ec) break;
        for (int i=ec; i>=sc; i--) {
            ans.push_back(matrix[er][i]);
        }
        er--;
        if (sr>er || sc>ec) break;
        for (int i=er; i>=sr; i--) {
            ans.push_back(matrix[i][sc]);
        }
        sc++;
        if (sr>er || sc>ec) break;
    }
    return ans;
}

int main() {
    vector <vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector <int> ans = spiralOrder(arr);
    for (int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}