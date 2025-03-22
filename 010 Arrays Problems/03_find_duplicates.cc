#include<iostream>
using namespace std;
int main() {
    int n;
    printf("Enter The Value Of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The Element : ");
    for (int i=0; i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    int act_sum = (n-1)*(n)/2;
    for (int i=0; i<n; i++) {
        sum+=arr[i];
    }
    int dup_num = sum - act_sum;
    printf("The Duplicate Number is %d\n",dup_num);
    return 0;
}