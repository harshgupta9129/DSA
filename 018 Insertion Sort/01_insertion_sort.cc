#include<bits/stdc++.h>
using namespace std;
void insertionSort(int n, vector<int> &arr){
    for (int i=1; i<n; i++) {
        for (int j=i; j>=0; j--) {
            if (arr[j]<arr[j-1]) swap(arr[j-1],arr[j]);
            else break;
        }
    }
}
int main() {
    vector <int> arr = {8,2,6,3,8,4};
    insertionSort(arr.size(),arr);
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}