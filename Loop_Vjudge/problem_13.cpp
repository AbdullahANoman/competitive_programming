#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,g,m;
    cin >> t >> g >> m;

    int x = 0, y=0;
    for (int i=1; i<=t; i++) {
        if (x==g) {
            x=0;
        }else if (y==0) {
            y=m;
        }else {
            int capacity = g-x;
            if (capacity>=y) {
                x=y;
                y=0;
            }else {
                y= y-capacity;
                x=g;
            }
        }

    }

    cout << x << " " << y << endl;
    return 0;
}
