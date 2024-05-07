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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= n)
                freq[a[i]]++;
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int curr = 0;
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    curr += freq[j];
                    if (j * j != i)
                    {
                        curr += freq[i / j];
                    }
                }
            }
            ans = max(ans, curr);
        }
        cout << ans << '\n';
    }
    return 0;
}