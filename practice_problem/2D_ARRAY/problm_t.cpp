#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int primaryValue = 0;
    int secondaryValue = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primaryValue += a[i][j];
            }
            if (i + j == n - 1)
            {
                secondaryValue += a[i][j];
            }
        }
    }

    cout << abs(primaryValue) + abs(secondaryValue) << endl;

    return 0;
}