#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int star=1;
    int space = n;
    int treeSpace=n;
    for(int i=1; i<=(n*3)/2; i++){
        for(int i=0; i<=space; i++){
            cout << " ";
        }
        for(int i=1; i<=star; i++){
            cout << "*" ;
        }
        cout << endl;
        star+=2;
        space--;
    }
    for(int i=1; i<=(n*3)/2; i++){
        for(int i=1; i<=treeSpace; i++){
            cout << " ";
        }
        for(int i=1; i<=3; i++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}