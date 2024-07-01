#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll x = 0, y = 0, currSum = 0, ans = 0;
    while (x < n)
    {
        while(y < n && currSum < l){
            currSum += a[y];
            y++;
        }
        if(currSum >= l && currSum <= r){
            ans++;
            x = y;
            currSum = 0;
        }
        else{
            currSum -= a[x];
            x++;
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