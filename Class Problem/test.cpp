#include <bits/stdc++.h>
using namespace std;

int main () {
    // int n=10;
    // int *p = &n;
    //
    // int **ptr = &p;
    // int ***ptr2 = &ptr;
    //
    // ***ptr2 = 20;
    // *p =100;
    //
    // cout << &n << " " << p  << " " << &p << " " << ptr << " " <<&ptr << " " << ptr2 <<  endl;
    //
    // cout << n << endl;
    int a[] = {1,2,3,4,5};
    int *p = &a[4];

    cout << *(p-1) << endl;
    return 0;
}