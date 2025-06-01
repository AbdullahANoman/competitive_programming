#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b ;
    // double result = double(a)/b;
    // long long roundedUp = ceil(result);
    // cout << roundedUp << endl;
    long long result = (a + b - 1) / b;

    cout << result << endl;
    return 0;
}
