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
        vector<int> a(n), v;
        map<int, int> mp, freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        for (pair<int, int> pr : mp)
        {
            int val = pr.first;
            int cnt = pr.second;
            if (val <= n)
            {
                for (int i = 1; i < cnt; i++)
                {
                    v.push_back(val);
                }
                freq[val] = 1;
            }
            else
            {
                for (int i = 0; i < cnt; i++)
                {
                    v.push_back(val);
                }
            }
        }

        sort(v.begin(), v.end());
        int cnt = 1, ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = cnt; j <= n; j++)
            {
                if (freq[j] == 1)
                    cnt++;
                else
                    break;
            }
            int x = (v[i] - 1) / 2;
            if (cnt <= x)
            {
                cnt++;
                ans++;
            }
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}