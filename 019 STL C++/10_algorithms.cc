#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    cout<<binary_search(v.begin(),v.end(),8)<<endl;    

    int a = 3, b = 5;
    cout<<max(a,b)<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string str="String";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}