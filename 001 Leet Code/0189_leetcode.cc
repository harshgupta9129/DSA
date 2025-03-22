#include<bits/stdc++.h>
using namespace std;

void newrotate(vector<int> &nums, int i,int j) {
    while (i<j) {
        int temp = nums[i];
        nums[i++] = nums[j];
        nums[j--] = temp;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;
    newrotate(nums,0,n-k-1);
    newrotate(nums,n-k,n-1);
    newrotate(nums,0,n-1);
}

int main() {
    vector <int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums,k);
    for (int i:nums) cout<<i<<" ";
    return 0;
}