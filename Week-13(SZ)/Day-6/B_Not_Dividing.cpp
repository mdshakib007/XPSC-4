#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]++;
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] % a[i - 1] == 0)
        {
            a[i]++;
        }
    }

    for (int val : a)
        cout << val << ' ';
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