#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> pref_cnt;
    pref_cnt[0] = 1;
    ll ans = 0, curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += a[i];
        if (pref_cnt.find(curr_sum - x) != pref_cnt.end())
        {
            ans += pref_cnt[curr_sum - x];
        }

        pref_cnt[curr_sum]++;
    }
    cout << ans << '\n';
    return 0;
}