#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll neg = 0, pos = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                if (pos > 0)
                {
                    pos -= abs(a[i]);
                    if (pos < 0)
                    {
                        neg += abs(pos);
                        pos = 0;
                    }
                }
                else
                {
                    neg += abs(a[i]);
                }
            }
            else
            {
                pos += a[i];
            }
        }
        cout << pos << endl;
    }
    return 0;
}