#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = n;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            ans += i;
    }
    cout << ans << '\n';
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