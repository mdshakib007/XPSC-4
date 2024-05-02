#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto valid = [&](int mid)
    {
        vector<bool> bad_pos(n + 1);
        for (int i = 0; i < mid; i++)
            bad_pos[a[i]] = true;

        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == t[k] && !bad_pos[i+1])
                k++;
            if (k == m)
                return true;
        }
        return k == m;
    };

    int l = 0, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (valid(mid))
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