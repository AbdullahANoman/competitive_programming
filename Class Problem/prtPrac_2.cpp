#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int star=n;
    int space=1;
    for (int i=1;i<=n;i++) {
        if (i>=2) {
            for (int j=1; j<=space; j++) {
                cout<<" ";
            }
          space++;
        }
        for (int j=1; j<=star; j++) {
            cout<<"*" ;
        }
        cout << endl;
        star--;
    }
}