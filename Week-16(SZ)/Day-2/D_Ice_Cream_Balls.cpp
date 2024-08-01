#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll types;
    cin >> types;

    ll mid, midCr, l = 1, r = 2e9;
    while (r - l > 1)
    {
        mid = l + (r - l) / 2;
        midCr = (mid * (mid - 1)) / 2;

        if (midCr <= types)
            l = mid;
        else
            r = mid;
    }

    ll lowCr = (l * (l - 1)) / 2;
    ll balls = types - lowCr;

    cout << l + balls << '\n';
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