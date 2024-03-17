#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    long long ans = 0;
    int l = 0, r = 0;

    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];

        while (l < n && curr == a[l])
        {
            cnt1++;
            l++;
        }

        while (r < m && b[r] < curr)
            r++;

        while (r < m && curr == b[r])
        {
            cnt2++;
            r++;
        }
        ans += (1ll * cnt1 * cnt2);
    }
    cout << ans;
    return 0;
}