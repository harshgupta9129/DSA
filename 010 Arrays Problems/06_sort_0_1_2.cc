#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   int noof0 = 0;
   int noof1 = 0;
   int noof2 = 0;
   for (int i=0; i<n; i++){
      if (arr[i]==0) noof0++;
      else if (arr[i]==1) noof1++;
      else if (arr[i]==2) noof2++;
   }
   int i;
   for (i=0; i<noof0; i++) {
      arr[i]=0;     
   }
   for (; i<noof0+noof1; i++) {
      arr[i]=1;     
   }
   for (; i<noof0+noof1+noof2; i++) {
      arr[i]=2;     
   }
}

int main () {
    int arr[] = {2,2,2,2,0,0,0,1,1,1};
    int n = 10;
    sort012(arr,n);
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}