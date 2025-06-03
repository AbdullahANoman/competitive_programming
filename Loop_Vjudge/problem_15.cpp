#include <bits/stdc++.h>
using namespace std;


bool isHatrick (string arr[], int k) {
    for (int i = 0; i < k; i++) {
        if (arr[i] == "W" && arr[i+1] == "W" && arr[i+2] == "W") {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t ;

    while (t--) {
        string arr[6];
        for (int i = 0; i < 6; i++) {
            cin >> arr[i];
        }
        if (isHatrick(arr, 6)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;

}
