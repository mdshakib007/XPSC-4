#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto canMake = [&](long long minDistance)
    {
        long long cowsPlaced = 1;
        long long lastPlaced = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] - lastPlaced >= minDistance)
            {
                lastPlaced = a[i];
                cowsPlaced++;
                if (cowsPlaced == k)
                    return true;
            }
        }
        return false;
    };

    long long l = 0, r = 1e9, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (canMake(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}
