#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int star=(n*2)-1;
    int space=1;
    for (int i=1; i<=(n*2)-1; i++) {
        if (i>1) {
            for (int j=1; j<=space; j++)
                cout<<" ";
        }
        for (int j=1; j<=star; j++) {
            cout<< "*" ;
        }
        cout<<endl;
        if (n>i) {
            star-=2;
            if (i>1) {
                space++;
            }
        }else {
            star+=2;
            space--;
        }

    }
}