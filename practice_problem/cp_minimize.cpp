#include <bits/stdc++.h>
using namespace  std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int minValue = INT_MAX;
        for (int c = a; c <= b; ++c) {
            int value = (c - a) + (b - c);
            if (value < minValue) {
                minValue = value;
            }
        }

        cout << minValue << endl;
    }

    return 0;
}
