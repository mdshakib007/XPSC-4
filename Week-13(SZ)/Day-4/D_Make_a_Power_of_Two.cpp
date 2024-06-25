#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> v;

int transfor(string s, string t)
{
    int si = 0, ti = 0, same = 0;
    while (si < s.length() && ti < t.length())
    {
        if (s[si] == t[ti])
            same++, ti++;
        si++;
    }
    return (int)((s.length()-same)+(t.length()-same));
}

void solve()
{
    string s;
    cin >> s;

    int ans = s.length() + 1;
    for (string t : v)
        ans = min(ans, transfor(s, t));
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (ll i = 1; i <= (1e18); i *= 2)
        v.push_back(to_string(i));

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}