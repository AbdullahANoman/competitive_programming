#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> arr;

    for(int i=0; i<n;i++){
        int x; cin>>x;
        arr.push_back(x);
    }

    vector<int>::iterator it;
    it=arr.begin();
    for(it=arr.begin(); it!=arr.end(); it++){
        cout << *it << " ";
    }
    // cout <<*it<< endl;

    return 0;
} 