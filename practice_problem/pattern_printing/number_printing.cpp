#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space = n - 1;
    int k = 1;
    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            cout << " ";
        }
        for (int i = 1; i <= k; i++)
        {
            cout << count;
            count++;
        }

        cout << endl;
        space--;
        k++;
    }

    return 0;
}