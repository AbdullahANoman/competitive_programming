#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >> n;
        int count = 0;
        int m = n;
        while (m>0) {
            int lastIndex = m%10;
            m= m/10;
            if (lastIndex > 0) {
                 count++;
            }
        }
        cout << count << endl;
        int p=1;
        while (n>0) {
            int lastDigit = n%10;
            n=n/10;
            if (lastDigit != 0) {
                cout << lastDigit*p << " ";
            }
            p*=10;
        }
        cout << endl;

    }
    return 0;
}

