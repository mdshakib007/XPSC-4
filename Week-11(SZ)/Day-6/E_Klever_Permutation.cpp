#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    int l = 1, r = n;
    vector<int> ans(n, 0);
    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < n; j += k)
        {
            if (i % 2 == 0)
            {
                ans[j] = l;
                l++;
            }
            else
            {
                ans[j] = r;
                r--;
            }
        }
    }
    for (int val : ans)
        cout << val << " ";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}