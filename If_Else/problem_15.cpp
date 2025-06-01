#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int o,n;

    cin >> o >> n;

    if(o<n){
        cout << "OLD" << endl;
    }else if(o>n){
        cout << "NEW" << endl;
    }else if(o==n) {
        cout <<"SAME" << endl;
    }

}
