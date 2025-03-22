#include<bits/stdc++.h>
using namespace std;

// It is Bad Practice
// Any One Can Change in Any function
int score = 5;

void a() {
    cout<<score<<" in a"<<endl;
}

void b() {
    cout<<score<<" in b"<<endl;
}

int main() {
    cout<<score<<" in main"<<endl;
    a();
    b();
    return 0;
}