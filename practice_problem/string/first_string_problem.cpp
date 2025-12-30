#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string ans = "";
        if (!s.empty())
        {
            ans.push_back(s[0]);
        }
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ')
            {
                ans.push_back(s[i + 1]);
            }
        }

        cout << ans << endl;
    }
    return 0;
}