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
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        vector<long long> even, odd;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                even.push_back(a[i]);
            else if (a[i] < 0)
                odd.push_back(abs(a[i]));
        }
        sort(even.begin(), even.end(), greater<long long>());
        sort(odd.begin(), odd.end(), greater<long long>());

        long long ans = 0, mx = 0;
        for (int i = 0; i < even.size(); i += k)
        {
            ans += (2 * even[i]);
            mx = max(mx, even[i]);
        }
        for (int i = 0; i < odd.size(); i += k)
        {
            ans += (2 * odd[i]);
            mx = max(mx, odd[i]);
        }
        ans -= mx;
        cout << ans << '\n';
    }
    return 0;
}