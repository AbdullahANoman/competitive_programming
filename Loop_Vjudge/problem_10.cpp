#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int max_quality = 0;
        int index = 0;
        for (int i=1;i<=n;i++) {
            int l,q;
            cin >> l >> q;
            if (l>10) {
                continue;
            }
            if (q>max_quality) {
                max_quality = q;
                index = i;
            }
        }
        cout << index << endl;
    }

    return 0;

}
