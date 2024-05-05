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

    auto canMake = [&](long long maxSum)
    {
        long long sum = 0, cntSeg = 1;
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] > maxSum)
            {
                cntSeg++;
                sum = 0; 
            }
            sum += a[i];
        }
        return cntSeg <= k;
    };

    long long l = 0, r = 1e14, mid, ans = 0;
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
    cout << ans << endl;

    return 0;
}