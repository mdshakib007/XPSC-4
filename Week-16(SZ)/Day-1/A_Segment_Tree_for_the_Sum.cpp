#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 9;
ll a[N], t[4 * N];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);     // call the left child to build left child
    build(r, mid + 1, e); // call the right child to build right child

    t[n] = t[l] + t[r]; // backtracking
}

void update(int n, int b, int e, int i, int v)
{
    // outer segment
    if (i < b || i > e)
    {
        return;
    }
    // inner segment
    if (b == e)
    {
        t[n] = v;
        return;
    }

    // intersection of segment
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);

    t[n] = t[l] + t[r]; // backtracking
}

ll query(int n, int b, int e, int i, int j)
{
    // outer segment
    if (j < b || i > e)
    {
        return 0;
    }
    // inner segment
    if (b >= i && e <= j)
    {
        return t[n];
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j));
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
        int cmd;
        cin >> cmd;
        if (cmd == 1)
        {
            int i, v;
            cin >> i >> v;
            i++; // 1 based
            update(1, 1, n, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++; // 1 based
            cout << query(1, 1, n, l, r) << '\n';
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
    //     CASES();
    // }
    CASES();

    return 0;
}