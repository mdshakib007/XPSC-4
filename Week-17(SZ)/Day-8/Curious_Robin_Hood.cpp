#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
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
    t[n] = t[l] + t[r];
}

void query_1(int n, int b, int e, int i, int& x)
{
    if (i < b || i > e)
        return;

    if (b == e)
    {
        x = t[n];
        t[n] = 0;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    query_1(l, b, mid, i, x);
    query_1(r, mid + 1, e, i, x);
    t[n] = t[l] + t[r];
}

void query_2(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
        return;

    if (b == e)
    {
        t[n] += v;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    query_2(l, b, mid, i, v);
    query_2(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

int query_3(int n, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;

    if (b >= i && e <= j)
        return t[n];

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query_3(l, b, mid, i, j) + query_3(r, mid + 1, e, i, j);
}

void CASES()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, x = 0;
            cin >> i;
            query_1(1, 1, n, i+1, x);
            cout << x << '\n';
        }
        else if (op == 2)
        {
            int i, v;
            cin >> i >> v;
            query_2(1, 1, n, i+1, v);
        }
        else
        {
            int i, j;
            cin >> i >> j;
            cout << query_3(1, 1, n, i+1, j+1) << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << n << ":\n";
        CASES();
        n++;
    }
    return 0;
}