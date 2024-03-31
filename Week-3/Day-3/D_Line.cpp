#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll value[n + 1] = {0}, cnt[n + 1];
        for (ll i = 0; i <= n; i++)
            cnt[i] = i;

        for (ll i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'L')
                value[i] = cnt[i - 1];
            else
                value[i] = cnt[n] - cnt[i];
        }

        vector<ll> change(n);
        ll maxSum = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll l = cnt[i - 1];
            ll r = cnt[n] - cnt[i];
            maxSum += max(l, r);
            change[i - 1] = max(l, r) - value[i];
        }
        ll changeCount = 0;
        vector<ll> finalChange;
        for (ll i = 0; i < n; i++)
        {
            if (change[i] != 0)
            {
                changeCount++;
                finalChange.push_back(change[i]);
            }
        }

        sort(finalChange.begin(), finalChange.end(), greater<ll>());
        
        ll ans[n];
        for (ll i = n; i >= 1; i--)
        {
            if (i >= changeCount)
                ans[i] = maxSum;
            else
            {
                maxSum -= finalChange.back();
                finalChange.pop_back();
                ans[i] = maxSum;
            }
        }

        // print sequences
        for (ll i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << '\n';
    }
    return 0;
}
