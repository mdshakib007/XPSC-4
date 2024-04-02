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
        int n, q;
        cin >> n >> q;
        int route[n];
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> route[i];
            mp[route[i]].push_back(i);
        }

        while (q--)
        {
            int start, end;
            cin >> start >> end;

            if (start == end)
            {
                cout << "YES\n";
                continue;
            }
            if (mp[start].empty() || mp[end].empty())
            {
                cout << "NO\n";
                continue;
            }
            if (mp[start].front() < mp[end].back())
            {
                cout << "YES\n";
                continue;
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}