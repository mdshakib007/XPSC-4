#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;
    cin >> k >> n;
    vector<ll> students(n);
    ll totalStudent = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> students[i];
        totalStudent += students[i];
    }

    auto ok = [&](int mid)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (students[i] > mid)
                sum += mid;
            else
                sum += students[i];
        }
        return (sum / mid) >= k;
    };

    ll l = 0, r = totalStudent / k, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
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