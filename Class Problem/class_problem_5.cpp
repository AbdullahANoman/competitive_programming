#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    while (true) {
        if (n==0 && m==0) {
            break;
        }
        if (n>m) {
            cout << m <<" " << n << endl;
        }else {
            cout << n << " " << m << endl;
        }
        cin >> n >> m;
    }
    return 0;

}