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

    int space = n-1;
    int star = 1;

    for (int i = 1; i <= n*2+1; i++)
    {
        for(int i=0; i<=space; i++){
            cout << " ";
        }
        for(int i=1; i<=star; i++){
            cout << "* ";
        }
        
        cout << endl;
        if(space>=0 && n>=star){
            space--;
            star++;
        }

    }

    return 0;
}
