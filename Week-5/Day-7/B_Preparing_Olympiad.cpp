#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0, mx = INT_MIN, mn = INT_MAX, size = 0;
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                sum += a[k];
                mx = max(mx, a[k]);
                mn = min(mn, a[k]);
                size++;
                // cout << a[k] << " ";
            }
        }
        // cout << endl;
        if (size >= 2 && sum >= l && sum <= r && (mx - mn >= x))
            ans++;
    }
    cout << ans << endl;

    return 0;
}