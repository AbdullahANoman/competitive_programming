#include <iostream>
using namespace std;

int main()
    {
       int n; cin >> n;
       int space = (n*2)-1;
       int k= 1;
        for(int i=0; i<n;i++){
            for(int i=1; i<=k; i++){
                cout << i ;
            }
            for(int i=0; i<space; i++){
                cout << " ";
            }
            for(int i=k; i>=1; i--){
                cout << i ;
            }
            cout << endl;
            space-=2;
            k++;
        }
       
     
         return 0;
    }