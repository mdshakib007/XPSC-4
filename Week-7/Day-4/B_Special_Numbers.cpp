#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        long long i = 1, ans = 0;
        while (k > 0)
        {
            if (k % 2 != 0)
            {
                ans += i;
                ans %= MOD;
            }
            k /= 2;
            i *= n;
            i %= MOD;
        }
        cout << ans << endl;
    }
    return 0;
}