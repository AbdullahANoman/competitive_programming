#include <iostream>
using namespace std;

void reverse(int i, int j, int arr[])
{
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k; 
    cin >> k;
    k=k%n;



    reverse(0,n-1,arr);
    reverse(0,k-1,arr);
    reverse(k,n-1,arr);


    for (int i = 0; i < n; i++)
    {   
        cout << arr[i] << " ";
    }
    return 0;
}