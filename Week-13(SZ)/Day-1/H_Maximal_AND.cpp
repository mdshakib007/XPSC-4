#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), cnt(31);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 30; j >= 0; j--)
        {
            if (a[i] & (1 << j))
                cnt[j]++;
        }
    }

    int ans = 0;
    for (int i = 30; i >= 0; i--)
    {
        int x = n - cnt[i];
        if (x <= k)
        {
            k -= x;
            ans += (1 << i);
        }
    }
    cout << ans << '\n';
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