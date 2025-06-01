#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y ;

    if(x>=y){
        int d= x-y;
       if (d<=3) {
           cout << "Yes" << endl;
       }else {
           cout << "No" << endl;
       }
    }else{
        int k=y-x;
        if (k<=2) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
    return 0;
}
