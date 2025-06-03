#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
    cin >> t ;
    int x=1;
    while (x<=t) {
        int n,m;
        cin >> n >> m;
        int sum =n+m;
        cout << "Case " << x << ": " << sum << endl;
        x++;
    }
    return 0;

}