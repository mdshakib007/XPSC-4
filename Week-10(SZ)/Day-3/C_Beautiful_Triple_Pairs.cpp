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
        {
            cin >> a[i];
        }

        map<tuple<int, int, int>, int> cnt;
        long long ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int x = a[i], y = a[i + 1], z = a[i + 2];

            tuple<int, int, int> triplet = make_tuple(x, y, z);
            vector<tuple<int, int, int>> fromTriplet(3);
            fromTriplet[0] = make_tuple(0, y, z);
            fromTriplet[1] = make_tuple(x, 0, z);
            fromTriplet[2] = make_tuple(x, y, 0);

            for (tuple<int, int, int> t : fromTriplet)
            {
                ans += (cnt[t] - cnt[triplet]);
                cnt[t]++;
            }
            cnt[triplet]++;
        }
        cout << ans << '\n';
    }
    return 0;
}