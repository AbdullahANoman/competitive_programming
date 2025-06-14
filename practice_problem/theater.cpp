#include <bits/stdc++.h>
using namespace  std;
int main (){
    int n,m,a;
    cin>>n>>m>>a;
    long long tilesLength = (n + a - 1) / a;
    long long tilesWidth = (m + a - 1) / a;

    long long result = tilesLength * tilesWidth;

    cout << result << endl;

    return 0;
}
