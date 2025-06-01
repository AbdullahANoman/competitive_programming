#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int x,y,z;

   cin >> x >> y >> z;

    if (x>y) {
        if (y>z) {
            cout << x << y << z << endl;
        }else {
            cout << x << z << y << endl;
        }
    }else if (y>z) {
        if (y>x) {
            cout << y << z << x << endl;
        }else {

        }
    }



}