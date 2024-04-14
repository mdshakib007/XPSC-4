#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
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
        string s, ans = "";
        cin >> s;

        int required = 0, filled = 0, l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
                filled += 2;
            else
                required++;
            l++, r--;
        }

        for (int i = 0; i <= n; i++)
        {
            int total = i;
            total -= required;
            if (total < 0)
            {
                ans += '0';
                continue;
            }

            total = max((total % 2), total - filled);
            total = max(0, total - (n % 2));

            if (total == 0)
                ans += '1';
            else
                ans += '0';
        }
        cout << ans << endl;
    }
    return 0;
}