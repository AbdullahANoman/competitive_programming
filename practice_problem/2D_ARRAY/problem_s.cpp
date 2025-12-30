#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;

    bool ans = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                ans = true;
                break;
            }
        }
    }

    if (ans == true)
    {
        cout << "will not take number" << endl;
    }
    else
    {
        cout << "will take number" << endl;
    }
    return 0;
}

// Input
// 2 2
// 1 2
// 3 4
// 10

// Output
// will take number

// Input
// 2 2
// 1 2
// 3 4
// 3

// Output
// will not take number
