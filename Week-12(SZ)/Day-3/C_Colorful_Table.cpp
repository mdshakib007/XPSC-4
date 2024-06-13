#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), left(k + 1, -1), right(k + 1, -1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        if (left[a[i]] == -1)
            left[a[i]] = i;
        right[a[i]] = i;
    }

    vector<pair<int, int>> x, y;
    for (int i = 1; i <= k; i++)
    {
        if (left[i] != -1)
        {
            x.push_back({left[i], i});
            y.push_back({right[i], i});
        }
    }

    for (int i = x.size() - 2; i >= 0; i--)
    {
        x[i].first = min(x[i].first, x[i + 1].first);
        y[i].first = max(y[i].first, y[i + 1].first);
    }

    vector<int> ans(k + 1);
    for (int i = 0; i < x.size(); i++)
    {
        ans[x[i].second] = (abs(x[i].first - y[i].first) + 1) * 2;
    }

    for (int i = 1; i <= k; i++)
        cout << ans[i] << " ";
    cout << '\n';
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