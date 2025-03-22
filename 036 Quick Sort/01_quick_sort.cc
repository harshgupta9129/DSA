#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e) {
    int pivot = arr[s];
    int i = s + 1, j = e;

    while (i <= j) {

        while (i <= j && arr[i] <= pivot) i++;
        while (i <= j && arr[j] > pivot) j--;

        if (i<j) {
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[s], arr[j]);
    return j;
}

void quickSort (vector <int> &arr, int s, int e) {
    if (s>=e) return;
    int p = partition(arr,s,e);

    quickSort (arr,s,p-1);
    quickSort (arr, p+1, e);

}

int main() {
    vector <int> arr = {5,4,7,2,6,1,9};
    int n = 7;
    quickSort(arr,0,n-1);
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
    return 0;
}