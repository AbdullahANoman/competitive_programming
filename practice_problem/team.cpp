#include <bits/stdc++.h>
using namespace  std;

int main() {
    int n;
    cin >> n;  // Number of problems

    int count = 0;  // To store number of problems they will implement

    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // If at least 2 of them are sure
        if ((petya + vasya + tonya) >= 2) {
            count++;
        }
    }

    cout << count << endl;  // Output the result
    return 0;
}
