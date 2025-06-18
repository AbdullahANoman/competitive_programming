#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1; i<n-1; i++){
            if(s[i]==s[0] || s[i]== s[n-1]){
                a=1;
                break;
            }else{
                for(int j=i+1; j<n-1; j++){
                    if(s[i]==s[j]){
                        a=1;
                        break;
                    }
                }
            }
        }
        cout << (a>0 ? "Yes" : "No") << endl;

    }


}