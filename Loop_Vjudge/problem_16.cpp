#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int x,n;
        cin >> x >> n;
        int mp = x*100;
        double dp = n-mp;

        double result = dp/100;
        // cout << result << endl;
        if (result<0) {
            cout << 0 << endl;
        }else {
            cout << ceil(result) << endl;
        }
    }



    return 0;
}
