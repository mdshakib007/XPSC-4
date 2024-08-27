#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    set<int> updatable;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= 10)
            updatable.insert(i);
    }

    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;

            auto it = updatable.lower_bound(l);
            while (it != updatable.end() && *it <= r)
            {
                int idx = *it;
                a[idx] = digit_sum(a[idx]);

                if (a[idx] < 10)
                {
                    it = updatable.erase(it);
                }
                else
                {
                    it++;
                }
            }
        }
        else
        {
            int x;
            cin >> x;
            x--;
            cout << a[x] << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
