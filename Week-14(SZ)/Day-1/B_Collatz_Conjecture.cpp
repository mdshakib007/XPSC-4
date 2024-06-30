#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    while (k > 0)
    {
        int curr = (1 + (x / y)) * y;
        if (curr - x > k)
        {
            cout << x + k << "\n";
            return;
        }
        k -= (curr - x);

        while (curr % y == 0)
            curr /= y;

        x = curr;
        if (x == 1)
            break;
    }
    if (k)
        x += (k % (y - 1));

    cout << x << "\n";
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