#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int k=1;
    int space= 1;
    for (int i=1; i<=n; i++) {
        for (int j=k; j<=n; j++) {
            cout << j ;
        }
        for (int i=1; i<=space; i++) {
            cout << " ";
        }
        for (int m=n; m>=k; m--) {
            cout << m ;
        }
        cout << endl;
        k++;
        space+=2;
    }
}