#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> str(n);
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            str[i] = s;
            mp[str[i]] = true;
        }

        for (int i = 0; i < n; i++)
        {
            int x = str[i].size();
            bool flag = false;
            for (int j = 1; j < x; j++)
            {
                string s1 = str[i].substr(0, j), s2 = str[i].substr(j, x - 1);
                if (mp[s1] && mp[s2])
                {
                    flag = true;
                    break;
                }
            }
            cout << (flag ? '1' : '0');
        }
        cout << '\n';
    }
    return 0;
}