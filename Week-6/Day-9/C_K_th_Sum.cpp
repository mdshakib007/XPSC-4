#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    auto canMake = [&](long long sum)
    {
        long long cnt = 0;
        int j = n - 1;
        for (int i = 0; i < n; i++)
        {
            while (j >= 0 && a[i] + b[j] > sum)
            {
                j--;
            }
            cnt += (j + 1);
        }
        return cnt >= k;
    };

    long long l = a[0] + b[0], r = a[n - 1] + b[n - 1], mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (canMake(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << '\n';

    return 0;
}