#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m) {
    int n = arr.size();
    int i = m+1, j=n-1;
    while (i<j) {
        int temp = arr[i];
        arr[i++] = arr[j];
        arr[j--] = temp;
    }
}

int main() {
    vector <int> v = {1,2,3,4,5,6};
    reverseArray(v,3);
    for (int i:v) cout<<i<<" ";
    cout<<endl;    
    return 0;
}