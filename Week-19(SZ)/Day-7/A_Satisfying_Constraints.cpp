#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;

    set<int> bad;
    int l = 0, r = INT_MAX;
    while (n--)
    {
        int t, x;
        cin >> t >> x;

        if (t == 1)
            l = max(l, x);
        else if (t == 2)
            r = min(r, x);
        else
            bad.insert(x);
    }

    int ans = r - l + 1;
    for (auto it : bad)
    {
        if (it >= l && it <= r)
            ans--;
    }

    if (ans < 0)
        ans = 0;
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