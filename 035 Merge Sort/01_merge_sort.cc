#include<bits/stdc++.h>
using namespace std;

void merge (int * arr ,int s, int e) {
    int mid = s+(e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int * first = new int[len1];
    int * second = new int[len2];
    int i = s;
    for (int j=0; j<len1; j++) {
        first[j] = arr[i++];
    }
    for (int j=0; j<len2; j++) {
        second[j] = arr[i++];
    }
    i = s;
    int j=0, k=0;
    while (j<len1 && k<len2) {
        if (first[j]<second[k]) arr[i++] = first[j++];
        else arr[i++] = second[k++];
    }
    while (j<len1) {
        arr[i++] = first[j++];
    }
    while (k<len2) {
        arr[i++] = second[k++];
    }
    free(first);
    free(second);
}

void mergesort (int * arr, int s, int e) {
    if (s>=e) return;
    int mid = s + (e-s)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main() {
    int arr[] = {9,4,2,7,1,0,3,5,6,8};
    int n = 10;
    mergesort(arr,0,n-1);
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
