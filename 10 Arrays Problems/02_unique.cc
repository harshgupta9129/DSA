#include<iostream>
using namespace std;
int main() {
    int n;
    printf("Enter The Value Of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The Element : ");
    int ans = 0;
    for (int i=0; i<n;i++) {
        scanf("%d",&arr[i]);
        ans = ans ^ arr[i];
    }
    printf("The Unique Element is %d\n",ans);
    return 0;
}