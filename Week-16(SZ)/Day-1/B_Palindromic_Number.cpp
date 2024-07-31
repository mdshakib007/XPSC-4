#include <bits/stdc++.h>
using namespace std;

void CASES()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans;
    if (s[0] != '9')
    {
        for (int i = 0; i < n; i++)
        {
            int x = s[i] - '0';
            int y = 9 - x;
            ans += (y + '0');
        }
    }
    else
    {
        int carry = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = s[i] - '0';
            x += carry;

            if (x > 1)
            {
                int y = 11 - x;
                carry = 1;
                ans += (y + '0');
            }
            else
            {
                carry = 0;
                int y = 1 - x;
                ans += (y + '0');
            }
        }
        reverse(ans.begin(), ans.end());
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