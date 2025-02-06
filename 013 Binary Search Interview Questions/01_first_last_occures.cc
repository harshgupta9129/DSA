#include<iostream>
using namespace std;
int main() {
    int k = 2;
    int arr[] = {0,0,1,1,2,2,2,2};
    int si = 0, ei = 7;
    int fi = -1, li = -1;
    while (si<=ei) {
        int mid = si + (ei - si)/2;
        if (arr[mid]==k) {
            fi = mid;
            ei = mid - 1;
        }
        else if (arr[mid]<k) si = mid +1;
        else ei = mid - 1;
    }
    si = 0, ei = 7;
    while (si<=ei) {
        int mid = si + (ei - si)/2;
        if (arr[mid]==k) {
            li = mid;
            si = mid + 1;
        }
        else if (arr[mid]<k) si = mid +1;
        else ei = mid - 1;
    }
    cout<<fi<<" "<<ei<<endl;
    return 0;
}