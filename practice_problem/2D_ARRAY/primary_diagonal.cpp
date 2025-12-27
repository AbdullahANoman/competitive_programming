#include <iostream>
using namespace std;

int main()
{
     int n;
     cin >> n;
     int arr[n][n];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               cin >> arr[i][j];
          }
     }

     int count = 0;

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               // cout << arr[i][j] << " ";
               if(i==j){
                    count++;
               }

          }
          // cout << endl;
     }

     if(count ==n){
          cout << "YES" << endl;
     }
     else{
          cout << "NO" << endl;
     }
}