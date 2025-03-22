#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {   
    for (int i=0; i<n; i++) {
        int b = 0;
        for (int j=1; j<n-i; j++) {
            if (arr[j-1]>arr[j]) {
                swap (arr[j-1],arr[j]);
                b = 1;
            }
        }
        if (b==0) break; 
    }
}

int main() {
    vector <int> arr = {8,2,6,3,6,23,9,0};
    bubbleSort(arr,arr.size());
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}