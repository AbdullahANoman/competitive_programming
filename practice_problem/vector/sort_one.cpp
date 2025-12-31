#include <iostream>
using namespace std;

int main()
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int &x:v){
            cin >> x;
        }

        // NOTE smaller to large
        sort(v.begin(),v.end());
        // NOTE larger to small 
        sort(v.begin(),v.end(),greater<int>());

        // NOTE reverse the value 
        reverse(v.begin(),v.begin()+2);
        for(int x:v){
            cout << x << " ";
        }


     
         return 0;
    }