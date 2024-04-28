#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
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
        vector<ll> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<ll> pre(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }

        vector<ll> ans(q);
        vector<pair<ll, ll>> query(q);
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            query[i] = {x, i};
        }
        sort(query.begin(), query.end());
        int idx = 0;
        for (int i = 0; i < q; i++)
        {
            while (true)
            {
                if (idx == n || a[idx + 1] > query[i].first)
                    break;
                idx++;
            }
            ans[query[i].second] = pre[idx];
        }
        for (int i = 0; i < q; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}