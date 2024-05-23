#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 0, l = 0, sum = 0;
    for (int r = 0; r < n; r++)
    {
        if (sum + a[r] == x)
        {
            ans++;
            sum = sum + a[r] - a[l];
            l++;
        }
        else if (sum + a[r] > x)
        {
            sum -= a[l];
            l++;
            r--;
        }
        else
        {
            sum += a[r];
        }
    }
    cout << ans << '\n';
    return 0;
}