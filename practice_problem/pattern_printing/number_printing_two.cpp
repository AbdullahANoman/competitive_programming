#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space = 0;
    int value = 1;
    int col = n;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= col; i++)
        {
            cout << value ;
            value++;
        }
        cout << endl;
        col--;
        space++;
    }
    return 0;
}
