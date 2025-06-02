#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r ;

        int x=0;
        if (r<=1399) {
            x=4;
        }else if (1400<=r && r<=1599) {
            x=3;
        }else if (1600<=r && r<=1899) {
            x=2;
        }else if (1900<=r) {
            x=1;
        }

        cout << "Division" << " " << x << endl;
    }

    return 0;
}
