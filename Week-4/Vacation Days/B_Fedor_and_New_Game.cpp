#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> a[i];

    vector<vector<int>> all_masks;
    for (int i = 0; i <= m; i++)
    {
        vector<int> tmp;
        for (int k = 0; k < n; k++)
        {
            if ((a[i] >> k) & 1)
                tmp.push_back(1);
            else
                tmp.push_back(0);
        }
        all_masks.push_back(tmp);
    }

    vector<int> fedor = all_masks[m];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        vector<int> curr = all_masks[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (fedor[k] != curr[k])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << endl;
    return 0;
}