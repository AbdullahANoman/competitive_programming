#include <bits/stdc++.h>
using namespace  std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 1 ;
    for (int i=1 ; ; i++) {
        if (i%3 == 0) {
            continue;
        }
        if (i%10 ==3) {
            continue;
        }
        if (count == n ) {
            cout << i << endl;
            break;
        }
        count++;
    }
    }
    return 0;
}