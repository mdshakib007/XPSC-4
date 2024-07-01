#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string a, b;
    cin >> a >> b;

    int ans = a.size() + b.size(), extra = 0;
    for (int i = 0; i < b.size(); i++)
    {
        int tmp = 0, from = i;
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == b[from])
            {
                from++;
                tmp++;
            }
        }
        extra = max(extra, tmp);
    }
    cout << ans - extra << '\n';
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