#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    if (n == 2)
    {
        cout << a[0] << " " << a[1] << '\n';
        return;
    }

    int idx = -1, mn = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        int diff = abs(a[i] - a[i - 1]);
        if (mn > diff)
        {
            mn = diff;
            idx = i;
        }
    }

    for (int i = idx; i < n; i++)
        cout << a[i] << " ";
    for (int i = 0; i < idx; i++)
        cout << a[i] << " ";
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