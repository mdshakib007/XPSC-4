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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll g = a[0];
        for (int i = 2; i < n; i += 2)
        {
            g = __gcd(g, a[i]);
        }
        if (g > 1)
        {
            bool flag = false;
            for (int i = 1; i < n; i += 2)
            {
                if (a[i] % g == 0)
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << g << '\n';
                continue;
            }
        }

        g = a[1];
        for (int i = 3; i < n; i += 2)
        {
            g = __gcd(g, a[i]);
        }
        if (g > 1)
        {
            bool flag = false;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g == 0)
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << g << '\n';
                continue;
            }
        }

        cout << 0 << '\n';
    }
    return 0;
}