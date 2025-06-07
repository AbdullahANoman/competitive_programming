#include <bits/stdc++.h>
using namespace  std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if(10<=n && n<=99){
            int a = n/10;
            int b = n % 10;
            cout << a + b << endl;
        }
    }
    return 0;
}
