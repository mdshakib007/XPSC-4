#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        while (__gcd(a, b) != 1)
        {
            ll gcd = __gcd(a, b);
            b /= gcd;
            if (b == 1)
                break;
        }

        if (b == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}