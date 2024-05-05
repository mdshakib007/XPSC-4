#include <bits/stdc++.h>

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
        vector < int > a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int tmp = 0;
            if (i > 0)
                tmp = max(tmp, abs(a[i] - a[i - 1]));
            if (i + 1 < n)
                tmp = max(tmp, abs(a[i] - a[i + 1]));
            ans = min(ans, tmp);
        }
        cout << ans << endl;
    }

    return 0;
}