#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> x(q);
        for (int i = 0; i < q; i++)
            cin >> x[i];

        set<ll> opt;
        for (int i = 0; i < q; i++)
        {
            if (opt.count(x[i]))
                continue;
            opt.insert(x[i]);
            
            for (int j = 0; j < n; j++)
            {
                if (a[j] % (1 << x[i]) == 0)
                    a[j] += (1 << (x[i] - 1));
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << '\n';
    }
    return 0;
}
