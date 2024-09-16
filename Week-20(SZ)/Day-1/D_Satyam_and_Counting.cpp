#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> zero(n + 2, 0), one(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        if (y == 0)
            zero[x] = 1;
        else
            one[x] = 1;
    }

    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (zero[i] == 1 && one[i] == 1)
            ans += (n - 2);

        if (i > 0 && i < n)
        {
            if (zero[i] == 1 && one[i - 1] == 1 && one[i + 1] == 1)
                ans++;
            if (one[i] == 1 && zero[i - 1] == 1 && zero[i + 1] == 1)
                ans++;
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        CASES();
    }
    return 0;
}