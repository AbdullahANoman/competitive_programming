#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    const int drink = k*l;
    int noOfDrinks = drink/nl;

    int noOfLimeDrinks = c*d;

    int noOfSaltDrinks  = p/np;

    int result = min({noOfDrinks, noOfLimeDrinks, noOfSaltDrinks}) / n;

    cout<<result<<endl;

    return 0;
}