#include<iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for (int i=1; i<10; i=i+2) {
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
    for (int i=0; i<10; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}