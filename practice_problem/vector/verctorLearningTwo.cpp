#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> arr(n);
    // int a=  arr.at(5);
    // int a = arr[5];
    for(int &x:arr){
        cin >> x;
    }

    arr.insert(arr.begin()+2,100);

    arr.erase(arr.begin(),arr.end()-1);
    for(int x:arr){
        x+=10;
        cout << x << " ";
    }



    return 0;
} 