#include<bits/stdc++.h>
using namespace std;

void reachHome (int src, int dest) {
    if (src==dest) return;
    cout<<"Start : "<<src<<" -> "<<"Destination : "<<dest<<endl;
    reachHome(++src,dest);
}

int main () {
    int dest = 10;
    int src = 1;
    
    reachHome (src,dest);
    return 0;
}