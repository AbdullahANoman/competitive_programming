#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int x[n];
        for(int j =0; j<n; j++){
            cin>>x[j];
        }
        int left = abs(x[0]-s);
        int right = abs(x[n-1]-s);
        if(left<=right){
            int r= (x[n-1]-x[0]) + (abs(s-x[0]));
            cout<<r<<endl;
        }else{
            int c= (x[n-1]-x[0]) + (abs(s-x[n-1]));
            cout<<c<<endl;
        }
    }
    return 0;
}