#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int bones = a*c;
    int blood = b*d;

    int result = bones + blood;

    cout << result << endl;



    return 0;
}