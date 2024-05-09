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
        string s;
        cin >> s;

        int n = s.size(), zeros = 0, ones = 0;
        for (char c : s)
        {
            if (c == '0')
                zeros++;
            else
                ones++;
        }

        string x;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (ones > 0)
                {
                    x += '1';
                    ones--;
                }
                else
                {
                    x += '0';
                    zeros--;
                }
            }
            else
            {
                if (zeros > 0)
                {
                    x += '0';
                    zeros--;
                }
                else
                {
                    x += '1';
                    ones--;
                }
            }
        }

        int ans = 0, l = 0, r = 0;
        while (true)
        {
            if (l >= n || r >= n)
            {
                break;
            }
            if (s[l] != x[r])
            {
                l++, r++;
            }
            else
            {
                ans++;
                r++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}