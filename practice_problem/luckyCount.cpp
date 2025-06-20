#include<bits/stdc++.h>
using namespace std;


bool isLucky(int n) {
    string s = to_string(n);
    for (char c : s) {
        if (c != '4' && c !='7') {
            return false;
        }
    }
    return true;
}
int main() {
    string s;
    cin>>s;

    int count=0;
    for (char c: s) {
        if (c=='4' || c=='7') {
            count++;
        }
    }

    if (isLucky(count)) {
        cout<<"YES" << endl;
    }else {
        cout<<"NO" << endl;
    }


}