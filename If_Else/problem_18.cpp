#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    // your code goes here
    int result = a+b+(a*b);
    if(result == 111){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}
