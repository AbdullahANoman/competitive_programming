#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y ;
    cin >> x >> y ;
    int costLaddu = y*10;
    int nowHave = x-costLaddu ;

    int takeJelabi = nowHave/20;

    cout << takeJelabi << endl;

    return 0;
}

