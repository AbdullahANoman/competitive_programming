#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<bool> track(6, false);
    vector<int> ans;
    for (int &x : vec)
    {
        cin >> x;
    }

    for (int &x : vec)
    {
        if (track[x] == false)
        {
            ans.push_back(x);
            track[x]=true;
        }
    }
    sort(ans.begin(),ans.end());
    for(int a:ans){
        cout << a << " ";
    }

    return 0;
}