#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;

       int total = (2*n)-x;

        if (total/x ==0 ) {
            cout << x << endl;
        }else if (total/x > 1) {
            cout << n << endl;
        }else {
            cout << 0 << endl;
        }

    }
    return 0;

}

