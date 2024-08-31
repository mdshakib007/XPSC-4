#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n, k;
    cin >> n >> k;

    ll a = n / k;
    if (n % k != 0)
        a++;
    a *= k;

    ll b = a / n;
    if (a % n != 0)
        b++;

    cout << b << '\n';
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