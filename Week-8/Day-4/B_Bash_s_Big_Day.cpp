#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    map<int, int> cnt;
    while (x--)
    {
        int n;
        cin >> n;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                cnt[i]++;
                
            while (n % i == 0)
                n /= i;
        }
        if (n > 1)
            cnt[n]++;
    }

    int ans = 1;
    for (auto [x, y] : cnt)
    {
        ans = max(ans, y);
    }
    cout << ans << '\n';
    return 0;
}
