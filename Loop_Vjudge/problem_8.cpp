#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin>>n>>t;

    int sum =0;
   while (n--) {
       int a;
       cin>>a;
       if (a<=t) {
           sum +=a;
       }
   }
    cout << sum << endl;

    return 0;
}