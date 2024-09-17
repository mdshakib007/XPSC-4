#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll ones = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
            ones++;
        sum += a[i];
    }

    if (sum >= ones + n && n > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        CASES();
    }
    return 0;
}