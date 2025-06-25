#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long r, b, d;
        cin >> r >> b >> d;

        long long l = min(r, b);
        long long m = max(r, b);
        cout << (m<=(d+1)*l ? "YES" : "NO") << endl;
    }

    return 0;
}