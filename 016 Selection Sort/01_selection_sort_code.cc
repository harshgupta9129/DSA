#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for (int i=0; i<n-1; i++) {
        int min = i;
        for (int j=i+1; j<n; j++) {
            if (arr[min]>arr[j]) min = j; 
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    vector <int> arr = {8,2,6,3,8,4};
    selectionSort(arr,arr.size());
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}