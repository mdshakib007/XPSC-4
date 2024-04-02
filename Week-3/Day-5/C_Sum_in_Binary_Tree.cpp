#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;

        while(n >= 1)
        {
            ans += n;
            n = floor(n/2);
        }
        cout << ans << endl;
    }
    return 0;
}