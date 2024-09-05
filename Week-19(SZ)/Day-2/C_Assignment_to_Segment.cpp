#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 5;
ll t[4 * N], lazy[4 * N];

void push(int n, int b, int e)
{
    if (lazy[n] != -1)
    {
        t[n] = lazy[n];
        if (b != e)
        {
            int l = 2 * n, r = 2 * n + 1;
            lazy[l] = lazy[n];
            lazy[r] = lazy[n];
        }
        lazy[n] = -1;
    }
}

void update(int n, int b, int e, int i, int j, int v)
{
    push(n, b, e);
    if (i > e || j < b)
        return;

    if (b >= i && e <= j)
    {
        lazy[n] = v;
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2;
    update(2 * n, b, mid, i, j, v);
    update(2 * n + 1, mid + 1, e, i, j, v);
    t[n] = t[2 * n];
}

ll query(int n, int b, int e, int i)
{
    push(n, b, e);
    if (b == e)
        return t[n];

    int mid = (b + e) / 2;
    if (i <= mid)
        return query(2 * n, b, mid, i);
    else
        return query(2 * n + 1, mid + 1, e, i);
}

void CASES()
{
    int n, m;
    cin >> n >> m;

    fill(t, t + 4 * n, 0);
    fill(lazy, lazy + 4 * n, -1);

    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            update(1, 0, n - 1, l, r - 1, v);
        }
        else
        {
            int i;
            cin >> i;
            cout << query(1, 0, n - 1, i) << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    CASES();

    return 0;
}
