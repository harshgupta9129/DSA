#include<bits/stdc++.h>
using namespace std;

void bubblesort (int * arr, int size) {
    if (size == 0) return;

    for (int i=0; i<size; i++) {
        if (arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,size-1);
}

int main () {
    int arr[8] = {6,2,8,1,9,3,4,5};
    bubblesort(arr,7);
    for (int i=0; i<8; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}