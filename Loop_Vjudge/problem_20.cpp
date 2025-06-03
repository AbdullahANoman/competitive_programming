#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >>t;
    while(t--) {
        int x,y,z;
        cin >> x >> y >> z;
        int ns = x*y;
        double fs = double(ns)/2;
        // cout << fs << endl;
        if (fs<z) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

