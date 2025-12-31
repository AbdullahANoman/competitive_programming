#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;

    // vector<string> v(n,"Noman");
    // NOTE here add Noman every index of size n
    // vector<string> v({"tanjid","noman"});
    //NOTE hre add name  every did not need size define

    vector<int> v(6,0);
    v.push_back(8);
    v.push_back(9);

    cout << v.capacity() << " " << v.size() << endl;

    for(int i=0;i<=n+2;i++){
        cout << v[i] << " ";
    }
    return 0;
} 