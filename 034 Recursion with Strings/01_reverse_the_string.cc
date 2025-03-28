#include<bits/stdc++.h>
using namespace std;

void reverse_string (char * str, int s, int e) {
    if (s>e) return;
    swap(str[s],str[e]);
    reverse_string (str,s+1,e-1);
}

int main () {
    char str[] = "Hello";
    int size = strlen(str);
    reverse_string (str,0,size-1);
    for (int i=0; i<size; i++) {
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}