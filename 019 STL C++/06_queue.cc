#include<bits/stdc++.h>
using namespace std;
// First in First Out
int main() {
    queue <string> s;
    s.push("Harsh");
    s.push("Rahul");
    s.push("Akash");
    s.push("Ajay");

    cout<<"First Element is : "<<s.front()<<endl;
    s.pop();
    cout<<"First Element is : "<<s.front()<<endl;
    return 0;
}