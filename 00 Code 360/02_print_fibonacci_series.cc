#include<bits/stdc++.h>
using namespace std;
vector<int> generateFibonacciNumbers(int n) {
    int a = 0;
    int b = 1;
    int sum = 0;
    vector <int> ans;
    for (int i=1; i<=n; i++) {
        ans.push_back(sum);
        sum = a + b;
        b = a;
        a = sum;
    }
    return ans;
}
int main() {
    vector<int> a = generateFibonacciNumbers(10);
    for (int i=0; i<a.size(); i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}