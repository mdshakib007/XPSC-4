#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool perfectSquare(ll x){
    ll y = sqrtl(x);
    return (y*y) == x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // cout << isPrime(4);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (isPrime(sqrtl(a[i])) && perfectSquare(a[i]))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}