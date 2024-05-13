#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b) * b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll total = 0;
    total += ((n / a) * p);
    total += ((n / b) * q);

    ll same = n / lcm(a, b);
    total -= (same * (p + q));
    total += (same * max(p, q));

    cout << total << '\n';

    return 0;
}