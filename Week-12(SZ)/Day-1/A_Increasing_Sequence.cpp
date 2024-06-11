#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i<n;i ++)cin>>a[i];

    if (a[0] == 1)
        b[0] = 2;
    else
        b[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == b[i - 1] + 1)
            b[i] = b[i - 1] + 2;
        else
            b[i] = b[i - 1] + 1;
    }
    cout << b.back() << '\n';
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