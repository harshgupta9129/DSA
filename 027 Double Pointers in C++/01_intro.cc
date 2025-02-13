#include<bits/stdc++.h>
using namespace std;

void update (int **ptr) {
    **ptr = **ptr + 1;

}
int main() {
    int num = 5;
    int* ptr = &num;
    int ** ptr2 = &ptr;

    cout<<ptr2<<endl;
    cout<<&ptr<<endl;
    cout<<ptr<<":->"<<&num<<endl;
    cout<<**ptr2<<":->"<<*ptr<<":->"<<num<<endl;

    update(ptr2);
    cout<<**ptr2<<endl;
    return 0;
}