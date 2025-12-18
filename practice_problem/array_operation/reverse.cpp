#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // simple formula 
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

    // swap formula 

    // for(int i=0; i<n/2; i++){
    //     swap(arr[i],arr[n-i-1]);
    // }

    // swap with temp ?
    int temp;

    for(int i=0; i<n/2; i++){
        temp=arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}