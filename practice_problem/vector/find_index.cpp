#include <iostream>
using namespace std;

int main()
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int &x:v){
            cin >> x;
        }
        
        auto it = find(v.begin(),v.end(),143);

        auto it = find(v.begin(),v.end(),143);
        // find index 
        cout << it - v.begin() << endl;
    
         return 0;
    }