#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        auto ok = [&](ll diff)
        {
            int cnt = 1, l = 0, r = 1;
            while (r < n)
            {
                if (a[l] + diff + diff >= a[r])
                {
                    r++;
                }
                else
                {
                    cnt++;
                    l = r;
                }
            }
            return (cnt <= 3);
        };

        ll l = 0, r = 1e14, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}