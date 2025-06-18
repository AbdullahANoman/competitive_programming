#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int space=n-1;
    int star=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=space; j++) {
            cout<<"s";
        }
        for (int i=1; i<=star; i++) {
            cout << "*" ;
        }
        cout<< endl;
        star+=2;
        space--;
    }
}