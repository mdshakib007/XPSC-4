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
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        int pre[n];
        pre[0] = a[0];
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] + a[i];

        while (q--)
        {
            int x;
            cin >> x;

            int l = 0, r = n - 1, ans = -2;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (pre[mid] >= x)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << ans + 1 << endl;
        }
    }
    return 0;
}