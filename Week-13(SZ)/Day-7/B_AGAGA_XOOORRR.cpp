#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = (a[i] ^ pre[i - 1]);
    }

    bool possible = !pre[n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            possible |= (pre[i] == (pre[j] ^ pre[i]) && pre[i] == (pre[n] ^ pre[j]));
        }
    }
    if (possible)
        cout << "YES\n";
    else
        cout << "NO\n";
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
