#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string recipe;
    long long nb, ns, nc, pb, ps, pc, money;

    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> money;

    long long B = 0, S = 0, C = 0;
    for (char c : recipe)
    {
        if (c == 'B')
            B++;
        else if (c == 'S')
            S++;
        else
            C++;
    }

    auto canMake = [&](long long hamburgers)
    {
        long long need_bread, need_sausage, need_cheese, cost;
        need_bread = max(0LL, (B * hamburgers - nb) * pb);
        need_sausage = max(0LL, (S * hamburgers - ns) * ps);
        need_cheese = max(0LL, (C * hamburgers - nc) * pc);
        cost = need_bread + need_sausage + need_cheese;

        return cost <= money;
    };

    long long l = 0, r = 1e13, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (canMake(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';

    return 0;
}
