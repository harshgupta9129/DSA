#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int i=0,j=0;
    int ans_index = 0;
    int n = chars.size();
    if (n==1) return 1;
    while (i<n) {
        while (j<n && chars[i]==chars[j]) {
            j++;
        }
        chars[ans_index++] = chars[i];
        int count = j-i;
        if (count>1) {
            string ch = to_string(count);
            for (char c : ch) {
                chars[ans_index++] = c;
            }
        }
        i = j;
    }
    return ans_index;
}

int main() {
    vector <char> chars = {'a','a','b','b','c','c','c'};
    int size = compress(chars);
    for (int i=0; i<size; i++) {
        cout<<chars[i];
    }
    return 0;
}