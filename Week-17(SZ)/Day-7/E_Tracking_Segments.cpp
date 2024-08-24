#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 9;
int t[4 * N];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = 0;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);

    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i)
{
    if (i > e || i < b)
        return;

    if (b == e)
    {
        t[n] = 1;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i);
    update(r, mid + 1, e, i);

    t[n] = t[l] + t[r];
}

int query(int n, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;

    if (b >= i && e <= j)
        return t[n];

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void CASES()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i].first >> a[i].second;
    int q;
    cin >> q;
    vector<int> queries(q);
    for (int i = 0; i < q; i++)
        cin >> queries[i];

    auto ok = [&](int mid)
    {
        build(1, 1, n);

        for (int i = 0; i <= mid; i++)
            update(1, 1, n, queries[i]);

        bool found = false;
        for (int i = 0; i < m; i++)
        {
            int l = a[i].first, r = a[i].second;
            int len = r - l + 1;
            int ones = query(1, 1, n, l, r);
            int zeros = len - ones;
            if (ones > zeros)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0, r = q - 1, mid = 0, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (ans != -1)
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