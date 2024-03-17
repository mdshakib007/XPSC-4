#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> ans;
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        while (l < n && a[l] <= b[r])
        {
            ans.push_back(a[l]);
            l++;
        }

        while (r < m && b[r] <= a[l])
        {
            ans.push_back(b[r]);
            r++;
        }
    }
    while (l < n)
    {
        ans.push_back(a[l]);
        l++;
    }
    while (r < m)
    {
        ans.push_back(b[r]);
        r++;
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}