#include<bits/stdc++.h>
using namespace std;

// int main() {
//     //Ques 1
//     // int first = 8;
//     // int second = 18;
//     // int * ptr = &second;
//     // *ptr = 9;
//     // cout<<first<<" "<<second<<endl;

//     // int first = 6;
//     // int *p = &first;
//     // int *q = p;
//     // (*q)++;
//     // cout<<first<<endl;   

//     // int *p = 0;
//     // int first = 110;
//     // *p = first;
//     // cout<<*p<<endl;

//     // int first = 8;
//     // int second = 11;
//     // int *third = &second;
//     // first = *third;
//     // *third = *third + 2;
//     // cout<<first<<" "<<second<<endl;

//     // float f = 12.5;
//     // float p = 21.5;
//     // float* ptr = &f;
//     // (*ptr)++;
//     // *ptr = p;
//     // cout<<*ptr<<" "<<f<<" "<<p<<endl;

//     // int arr[5];
//     // int *ptr;
//     // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

//     // int arr[] = {11,12,13};
//     // cout<<arr<<" "<<&arr<<endl;

//     // int arr[6] = {11,21,13};
//     // cout<<(arr+1)<<endl;

//     // int arr[] = {11,21,31};
//     // int *p = arr;
//     // cout<<p[2]<<endl;

//     // int arr[] = {11,12,13,14,15};
//     // cout<<*(arr)<<" "<<*(arr+3)<<endl;

//     // int arr[] = {11,21,31,41};
//     // int *ptr = arr++; arr ki address kabhi na change hoti hai
//     // cout<<*ptr<<endl;

//     // char ch = 'a';
//     // char *ptr = &ch;
//     // ch++;
//     // cout<<*ptr<<endl;

//     // char arr[] = "abcde";
//     // char *p = &arr[0];
//     // cout<< p << endl;

//     // char str[] = "Harsh";
//     // char *p = str;
//     // cout<<str[0]<<" "<<p[0]<<endl;
//     return 0;
// }

// void update (int *p) {
//     *p = (*p) * 2;
// }
// int main() {
//     int i = 10;
//     update(&i);
//     cout<<i<<endl;
//}

// int main() {
//     // int first = 110;
//     // int *p = &first;
//     // int **q = &p;
//     // int second = (**q)++ + 9;
//     // cout<<first << " " << second << endl;

//     int first = 100;
//     int *p = &first;
//     int **q = &p;
//     int second = ++(**q);
//     int *r = *q;
//     ++(*r);
//     cout<<first<<" "<<second<<endl;
// }

void increment(int **p) {
    ++(**p);
}

int main() {
    int num  = 110;
    int *ptr = &num;
    increment(&ptr);
    cout<<num<<endl;
}