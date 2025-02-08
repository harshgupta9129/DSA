#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1, j=n-1,k=m+n-1;
    while (i>=0 && j>=0) {
        if (nums1[i]<nums2[j]) nums1[k--]=nums2[j--];
        else nums1[k--] = nums1[i--];
    }
    if (i<0) {
        while (k>=0) {
            nums1[k--] = nums2[j--];
        }
    }
    else {
        while (k>=0) {
            nums1[k--] = nums1[i--];
        }
    }
}

int main() {
    vector <int> nums1 = {1,2,3,0,0,0};
    vector <int> nums2 = {2,5,6};
    int m=3,n=3;
    merge(nums1,m,nums2,n);
    for (int i:nums1) cout<<i<<" ";
    cout<<endl;
    return 0;
}