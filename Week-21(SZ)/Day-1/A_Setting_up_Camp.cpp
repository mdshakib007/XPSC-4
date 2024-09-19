#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int a, b, c;
    cin >> a >> b >> c;

    while (b % 3 != 0)
    {
        if (c > 0)
            b++, c--;
        else
            break;
    }

    if (b % 3 != 0)
    {
        cout << -1 << '\n';
        return;
    }

    ll ans = a;
    ans += b / 3;
    ans += c / 3;
    c %= 3;

    if (c)
        ans++;
        
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