#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int d,e,dr,er;
    cin >> d >> e >> dr >> er ;

    int fd = d + dr ;
    int fe = e + er ;

    cout << fd << fe ;

    if(fd>fe){
        cout << "Dominater" << endl;
    }else {
        cout << "Everule" << endl;
    }

    return 0;
}
