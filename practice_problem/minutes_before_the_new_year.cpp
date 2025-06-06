#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int h, m;
        cin >> h >> m;
        int minutes_left = 1440 - (h * 60 + m);
        cout << minutes_left << endl;
    }

    return 0;
}
