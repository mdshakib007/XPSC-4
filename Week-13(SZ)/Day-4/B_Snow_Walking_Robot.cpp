#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    map<char, int> cnt;
    for (char c : s)
        cnt[c]++;

    int x = min(cnt['U'], cnt['D']);
    int y = min(cnt['L'], cnt['R']);

    if (min(x, y) == 0)
    {
        if (x == 0)
        {
            y = min(y, 1);
            cout << 2 * y << '\n';
            cout << string(y, 'L') + string(y, 'R') << '\n';
        }
        else
        {
            x = min(x, 1);
            cout << 2 * x << '\n';
            cout << string(x, 'U') + string(x, 'D') << '\n';
        }
    }
    else
    {
        string ans;
        ans += string(y, 'L');
        ans += string(x, 'U');
        ans += string(y, 'R');
        ans += string(x, 'D');

        cout << ans.length() << '\n';
        cout << ans << '\n';
    }
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