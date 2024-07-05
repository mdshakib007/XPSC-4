#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0, idx = -(k + 1);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (i - idx > k)
            {
                ans++;
                s[i] = '1';
                idx = i;
            }
        }
        else
        {
            if (i - idx <= k)
            {
                s[i] = '0';
                ans--;
            }
            idx = i;
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