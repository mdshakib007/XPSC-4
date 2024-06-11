#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0, sum = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i] > 0)
            sum += a[i];
    }
    
    ans = max(ans, sum);
    sum = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > 0)
            sum += a[i];
    }

    ans = max(ans, sum);
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