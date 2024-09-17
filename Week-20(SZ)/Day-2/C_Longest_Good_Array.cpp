#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll l, r;
    cin >> l >> r;

    ll len = 0, diff = 1;
    while (l <= r)
    {
        len++;
        l += diff;
        diff++;
    }
    cout << len << '\n';
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