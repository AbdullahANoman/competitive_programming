#include <iostream>
using namespace std;

int main()
{
     int m, n, p;
     cin >> m >> n >> p;
     int a[m][n];
     for (int i = 0; i < m; i++)
     {
          for (int j = 0; j < n; j++)
          {
               cin >> a[i][j];
          }
     }

     int b[n][p];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < p; j++)
          {
               cin >> b[i][j];
          }
     }
     int c[m][p];
     for (int i = 0; i < m; i++)
     {
          for (int j = 0; j < p; j++)
          {
               c[i][j] = 0;
               for (int k = 0; k < n; k++)
               {
                    // cout << "C[" << i << "][" << j << "]";
                    // cout << "+=A[" << i << "][" << k << "]";
                    // cout << "*B[" << k << "][" << j << "]" << endl;

                    c[i][j] += a[i][k] * b[k][j];
               }
          }
     }

     for (int i = 0; i < m; i++)
     {
          for (int j = 0; j < p; j++)
          {
               cout << c[i][j] << " ";
          }
          cout << endl;
     }
     return 0;
} 