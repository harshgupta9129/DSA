#include<iostream>
using namespace std;
int main() {
    int n1,n2;
    printf("Enter The Value Of n1 : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter The Element : ");
    for (int i=0; i<n1;i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter The Value Of n2 : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter The Element : ");
    for (int i=0; i<n2;i++) {
        scanf("%d",&arr2[i]);
    }
    int i=0,j=0;
    while (i<n1 && j<n2) {
        if (arr1[i]==arr2[j]) {
            printf("%d ",arr1[i]);
            i++,j++;
        }
        if (arr1[i]<arr2[j]) {
            i++;
        }
        if (arr1[i]>arr2[j]) {
            j++;
        }
    }
    return 0;
}