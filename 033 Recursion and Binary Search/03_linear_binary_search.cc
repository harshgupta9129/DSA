#include<bits/stdc++.h>
using namespace std;

bool binary_search (int a[], int s, int e,int key) {
    if (s>e) return 0;
    int mid = s + (e-s)/2;
    if (a[mid]==key) return 1;
    if (a[mid]>key) return binary_search(a,s,mid,key);
    else return binary_search(a,mid+1,e,key);
}

int main () {
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    cout<<binary_search(a,0,n-1,10);
    return 0;
}