// Binary_Search
#include<iostream>
using namespace std;
int binarysearch (int arr[],int n,int key) {
    int si=0, ei=n-1;
    while (si<=ei) {
        int mid = si + (ei-si)/2;
        if (arr[mid]==key) return mid;
        if (arr[mid]<key) si = mid+1;
        else ei = mid-1;
    }
    return -1;
}
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<binarysearch(arr,10,5);
}