#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> pref_cnt;
    pref_cnt[0] = 1;
    ll curr_sum = 0, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum += a[i];
        ll mod = ((curr_sum % n) + n) % n;

        if (pref_cnt.find(mod) != pref_cnt.end())
        {
            cnt += pref_cnt[mod];
        }
        pref_cnt[mod]++;
    }
    cout << cnt << '\n';
    return 0;
}