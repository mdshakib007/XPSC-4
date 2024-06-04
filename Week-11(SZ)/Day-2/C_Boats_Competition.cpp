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

        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 2; i <= 2 * n; i++)
        {
            int l = 0;
            int r = n - 1;
            int curr = 0;
            while (l < r)
            {
                int sum = a[l] + a[r];
                if (sum == i)
                {
                    curr++;
                    l++;
                    r--;
                }
                else if (sum < i)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }

            ans = max(ans, curr);
        }

        cout << ans << '\n';
    }

    return 0;
}
