#include<bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    vector <int> ans;
    for (int j=0; j<mCols; j++) {
        if (j%2!=0) {
            for (int i=0; i<nRows; i++) {
                ans.push_back(arr[nRows-i-1][j]);
            }
        }
        else {
            for (int i=0; i<nRows; i++) {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main() {
    vector <vector <int> > arr ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector <int> ans = wavePrint(arr,3,4);
    for (int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}