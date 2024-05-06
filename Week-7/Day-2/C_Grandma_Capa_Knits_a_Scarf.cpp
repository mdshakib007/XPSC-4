#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = n + 1;
        for (int i = 0; i < 26; i++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++, r--;
                }
                else if (s[l] == char('a' + i))
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == char('a' + i))
                {
                    r--;
                    cnt++;
                }
                else
                {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans != n + 1)
            cout << ans << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}