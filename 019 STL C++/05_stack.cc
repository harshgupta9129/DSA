#include<bits/stdc++.h>
using namespace std;
int main() {
    //Last in First Out
    stack <string> a;
    a.push("Harsh");
    a.push("Piyush");
    a.push("Rahul");
    cout<<a.top()<<endl;
    cout<<"Size is : "<<a.size()<<endl;

    return 0;
}