#include <bits/stdc++.h>
using namespace  std;

int main() {
    char a,b,c,d;
    cin >> a >> b >> c >> d;

    int valueA = a-'0';
    int valueB = b-'0';
    int valueC = c-'0';
    int valueD = d-'0';

    int fDv = 0;
    if (valueA>valueB)
        fDv = valueA-valueB;
    else
        fDv = valueB-valueA;

    int sDv = 0;
    if (valueC>valueD)
        sDv = valueC-valueD;
    else
        sDv = valueD-valueC;

    cout << fDv << " "  << sDv << endl;

    if (fDv>2) {
        fDv = 5 - fDv;
    }
    if (sDv>3) {
        sDv= 5 - sDv;
    }

    // cout << valueA << " " << valueB << " " << valueC  << " " << valueD << endl;

    if (fDv == sDv) {
        cout << "Yes"  << endl;
    }else {
        cout << "No"  << endl;
    }



    return 0;
}