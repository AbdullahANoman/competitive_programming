#include <iostream>
using namespace std;

int main()
{

    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n;i++) cin>> arr[i];

    int k ; cin >> k;
    k= k%n;

    int ans[n];
    for(int i=0; i<n; i++){
        int realIndex = (i+n-k)%n;
        ans[realIndex] = arr[i]; 
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}