#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0, valid, remaining = k;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || valid < a[i] || remaining == 0)
        {
            ans++;
            remaining = k;
            valid = a[i] + w + d;
        }
        remaining--;
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