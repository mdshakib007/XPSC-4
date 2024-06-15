#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<multiset<int>> v;
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++)
    {
        multiset<int> ms;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            ms.insert(x);
            pr.push_back({x, i});
        }
        v.push_back(ms);
    }

    sort(pr.begin(), pr.end());
    vector<vector<int>> ans(n, vector<int>(m, 0));
    int j = 0;
    for (int i = 0; i < m; i++, j++)
    {
        ans[pr[i].second][j] = pr[i].first;
        v[pr[i].second].erase(v[pr[i].second].find(pr[i].first));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ans[i][j] == 0)
            {
                ans[i][j] = (*v[i].begin());
                v[i].erase(v[i].begin());
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}