#include <bits/stdc++.h>
using namespace std;
vector < vector <int>> pairSum(vector <int> &arr, int s){
    sort(arr.begin(),arr.end());
   int n = arr.size();
   vector <vector <int>> ans;
   for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]+arr[j]==s)  {
                vector <int> temp = {arr[i],arr[j]};
                ans.push_back(temp);
            }
        }
   }
   return ans;
}
int main() {
    vector <int> arr = {1,2,3,4,5,6};
    vector <vector <int>> ans = pairSum(arr,8);
    for (int i=0; i<ans.size(); i++) {
        for (int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}