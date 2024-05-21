#include <bits/stdc++.h>
using namespace std;

int prime(int x)
{
    if (x % 2 == 0)
        return 2;

    for (int i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
            return i;
    }
    if (x > 2)
        return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (r <= 3)
        {
            cout << -1 << '\n';
        }
        else
        {
            if (l < r)
            {
                if (r % 2 != 0)
                    r--;
                cout << 2 << ' ' << r - 2 << '\n';
            }
            else
            {
                int p = prime(l);
                if (p == l)
                    cout << -1 << '\n';
                else
                    cout << p << ' ' << l - p << '\n';
            }
        }
    }
    return 0;
}