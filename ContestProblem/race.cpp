#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int a,x,y;
        cin>>a>>x>>y;
        int d,b,c;
        b= abs(a-x);
        c = abs(a-y);

        d =abs(x-y);

        cout << (d<b || d<c ? "YES" : "NO") << endl;

    }

return 0;
}
