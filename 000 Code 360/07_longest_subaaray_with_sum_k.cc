#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int>& a, long long k) {
    int left = 0, max_len = 0;
    long long sum = 0;
    for (int right = 0; right < a.size(); right++) {
        sum += a[right];

        while (sum > k) {
            sum -= a[left++];
        }
        if (sum == k) {
            max_len = max(max_len, right - left + 1);
        }
    }
    return max_len;
}
int main() {
    vector <int> a = {1,2,2,1};
    cout<<longestSubarrayWithSumK(a,2)<<endl;
    return 0;
}