#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    int d = min(a,b);
    int r = abs(a-b);

    int f = r/2;

    cout << d << " " << f << endl;

    return 0;
}