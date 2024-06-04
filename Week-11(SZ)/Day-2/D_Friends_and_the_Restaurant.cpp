#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<ll, ll>> diff(n);
        for (int i = 0; i < n; i++)
        {
            diff[i].first = b[i] - a[i];
            diff[i].second = i;
        }

        sort(diff.begin(), diff.end());
        reverse(diff.begin(), diff.end());

        int l = 0, r = n - 1, ans = 0;
        while (l < n)
        {
            while ((l < r) && (diff[l].first + diff[r].first < 0))
                r--;

            if (r <= l)
                break;
            ans++;
            l++, r--;
        }
        cout << ans << '\n';
    }
    return 0;
}