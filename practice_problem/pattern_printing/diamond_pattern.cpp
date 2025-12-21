#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space = n - 1;
    int k = 1;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        if (n > i)
        {
            space--;
            k++;
        }
        else
        {
            space++;
            k--;
        }
    }
    return 0;
}