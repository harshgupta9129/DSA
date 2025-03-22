#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i=0;
    int n = nums.size();
    for (int j=0; j<n; j++) {
        if (nums[j]!=0) {
            swap(nums[j],nums[i++]);
        }
    }
}

int main() {
    vector <int> nums= {0,1,0,3,12};
    moveZeroes(nums);
    for (int i:nums) cout<<i<<" ";
    cout<<endl;    
    return 0;
}