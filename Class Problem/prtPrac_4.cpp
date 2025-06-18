#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int star=1;
    for (int i=1; i<=(n*2)-1; i++) {
        for (int j=1; j<=star; j++) {
            cout << "*" ;
        }
        cout << endl;
        if (n>i) {
            star++;
        }else {
        star --;
        }
    }
}