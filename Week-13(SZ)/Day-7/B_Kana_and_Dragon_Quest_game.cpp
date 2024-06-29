#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;

    while (x > 0 && n > 0 && (x / 2) + 10 < x)
    {
        x = (x / 2) + 10;
        n--;
    }
    while (x > 0 && m > 0)
    {
        x -= 10;
        m--;
    }

    if (x > 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}