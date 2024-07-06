#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n, m, h;
    cin >> n >> m >> h;
    pair<ll, ll> pr;
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        vector<ll> a(m);
        for (ll j = 0; j < m; j++)
            cin >> a[j];

        sort(a.begin(), a.end());

        ll solved = 0, penalty = 0, sum = 0;
        for (ll j = 0; j < m; j++)
        {
            if (sum + a[j] > h)
                break;

            sum += a[j];
            penalty += sum;
            solved++;
        }
        if (i == 0)
        {
            pr = {-solved, penalty};
        }
        else
        {
            if (make_pair(-solved, penalty) < pr)
                ans++;
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
        CASES();
    }
    return 0;
}