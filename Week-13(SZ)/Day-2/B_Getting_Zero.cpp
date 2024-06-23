#include <bits/stdc++.h>
using namespace std;
const int MOD = 32768;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;

        int ans = 15;
        for (int i = 0; i <= 15; i++)
        {
            int curr = (x + i) % MOD;
            int moves = i;

            while (curr != 0)
            {
                curr = (curr << 1);
                curr %= MOD;
                moves++;
            }
            ans = min(ans, moves);
        }
        cout << ans << ' ';
    }
    return 0;
}