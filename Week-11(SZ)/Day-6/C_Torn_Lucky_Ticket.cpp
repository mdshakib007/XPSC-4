#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(string &a, string &b)
{
    return a.size() < b.size();
}

void solve()
{
    ll n;
    cin >> n;
    vector<string> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), cmp);
    map<pair<ll, ll>, ll> freq;
    ll ans = n;

    for (string s : arr)
    {
        ll i = s.size();
        for (ll j = 1; j <= i; j++)
        {
            if ((i + j) % 2 != 0)
                continue;

            ll mid = (i + j) / 2;
            ll need = 0;
            for (ll k = 0; k < mid; k++)
                need += (s[k] - '0');
            for (ll k = mid; k < i; k++)
                need -= (s[k] - '0');

            if (need >= 0)
                ans += freq[{j, need}];
        }

        reverse(s.begin(), s.end());
        for (ll j = 1; j <= i; j++)
        {
            if ((i + j) % 2 != 0)
                continue;

            ll mid = (i + j) / 2;
            ll need = 0;
            for (ll k = 0; k < mid; k++)
                need += (s[k] - '0');
            for (ll k = mid; k < i; k++)
                need -= (s[k] - '0');

            if (need >= 0)
                ans += freq[{j, need}];
        }

        ll sum = 0;
        for (ll j = 0; j < i; j++)
            sum += (s[j] - '0');
        freq[{i, sum}]++;
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}