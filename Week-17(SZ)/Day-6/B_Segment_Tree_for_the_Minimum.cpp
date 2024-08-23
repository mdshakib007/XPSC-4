#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9, inf = 1e9+9;
int a[N], t[4 * N];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);

    // backtracking
    t[n] = min(t[l], t[r]);
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
        return;

    if (b == e)
    {
        t[n] = v;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);

    // backtracking
    t[n] = min(t[l], t[r]);
}

int query(int n, int b, int e, int i, int j)
{
    if (j < b || i > e)
        return inf;

    if (b >= i && e <= j)
        return t[n];

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void CASES()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            update(1, 1, n, i + 1, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l+1, r) << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        CASES();
    // }
    return 0;
}