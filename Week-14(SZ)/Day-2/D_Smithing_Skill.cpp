#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6 + 5;

int n, m;
int a[N], b[N], c[N];
vector<pair<int, int>> all;
map<ll, ll> dp;

ll solve(int curr)
{
    if (dp.count(curr))
        return dp[curr];

    int l = 0, r = all.size()-1, mid = 0, idx = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (all[mid].second <= curr)
        {
            idx = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (idx == -1)
        return dp[curr] = 0;

    ll diff = all[idx].first;
    ll need = all[idx].second;

    ll times = (curr - need) / diff + 1;
    ll left = curr - (times * diff);
    ll ans = times * 2 + solve(left);
    return dp[curr] = ans;
}

void CASES()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        all.push_back({a[i] - b[i], a[i]});
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }

    sort(all.begin(), all.end());

    vector<pair<int, int>> tmp;
    for (int i = 0; i < n; i++)
    {
        if (tmp.empty())
            tmp.push_back(all[i]);

        else if (tmp.back().second > all[i].second)
            tmp.push_back(all[i]);
    }
    all = tmp;

    ll ans = 0;
    for (int i = 0; i < m; i++)
        ans += solve(c[i]);
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    CASES();
    return 0;
}