#include <bits/stdc++.h>
using namespace std;
void cYes(){
    cout<<"YES"<<endl;
}
void cNo(){
    cout<<"NO"<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,count =0,start,end;
        cin>>n>>x;
        int arr[n];

        for(int i=0; i<n; i++){

            cin>>arr[i];

        }
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                start = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(arr[i]==1){
                end = i;
                break;
            }
        }
        if(x>=(end-start)+1){
            cYes();
        }else{
            cNo();
        }
    }
}