#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >>t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;

        int tma =  x*y;
        int tmd = z*24*60;

        if(tma<=tmd){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

}
