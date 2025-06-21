#include <bits/stdc++.h>
using namespace std;

bool isSquareString(string s) {
    int l = s.length();
    if (l % 2 != 0) return false; // Must be even length
    string first = s.substr(0, l / 2);
    string second = s.substr(l/ 2);
    return first == second;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (isSquareString(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}