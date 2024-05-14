#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    cin >> x;

    ll ans = 0;
    if (isPrime(x))
    {
        ans += 1;
    }
    else if (x % 2 == 0)
    {
        ans += 2;
    }
    else
    {
        if (isPrime(x - 2))
            ans += 2;
        else
            ans += 3;
    }
    
    cout << ans << '\n';
    return 0;
}