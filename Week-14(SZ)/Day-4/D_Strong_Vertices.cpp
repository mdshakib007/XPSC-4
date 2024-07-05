#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        mx = max(mx, a[i] - b[i]);
    }

    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] - b[i] == mx)
            ans.push_back(i + 1);
    }

    cout << ans.size() << '\n';
    for (ll val : ans)
        cout << val << ' ';
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
        CASES();
    }
    return 0;
}