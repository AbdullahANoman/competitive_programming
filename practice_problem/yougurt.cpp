#include<bits/stdc++.h>
using namespace std;
int main() {
        int t;
        cin >> t;

        while (t--) {
            int n, a, b;
            cin >> n >> a >> b;

            int p = n / 2;
            int r= n % 2;

            int cost = p * min(2 * a, b) + r * a;
            cout << cost << endl;
        }
    return 0;
}