#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v) {
    
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1, j=m-1;
	int carry = 0;
	vector <int> sum;
	while (i>=0 && j>=0) {
		int s = a[i--]+b[j--] + carry;
		sum.push_back(s%10);
		carry = s/10;
	}
	if (n==m && carry==1) sum.push_back(1); 
	while (i>=0) {
		int s = a[i--] + carry;
		sum.push_back(s%10);
		carry = s/10;
	}
	while (j>=0) {
		int s = b[j--] + carry;
		sum.push_back(s%10);
		carry = s/10;
	}
	return reverse(sum);
}

int main() {
    vector<int> a = {7,8,9};
    vector <int> b = {1,2,3,4,5,6,};
    vector <int> s = findArraySum(a,a.size(),b,b.size());
    for (int i:s) cout<<i;
    cout<<endl;
    return 0;
}