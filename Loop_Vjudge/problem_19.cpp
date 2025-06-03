#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >>t;
    while(t--){
        long long int x,y;
        cin >> x >> y ;

        // int total = x*(y+1);
        double tp = double(x)/(y+1);
        int totalGivenFriend = floor(tp) * y;
        int wantToGive = x - totalGivenFriend;
        cout << wantToGive << endl;
    }
    return 0;
}

