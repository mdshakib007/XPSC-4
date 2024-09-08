#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 5;
ll a[N], t[4 * N], lazy[4 * N];

void push(int n, int b, int e)
{
    if (lazy[n] == 0)
        return;
    
    t[n] += (1ll * lazy[n] * (e-b+1));
    if(b != e){
        int l = 2*n, r = 2*n+1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

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
    t[n] = t[r]+ t[l];
}

void update(int n, int b, int e, int i, int j, int v)
{
    push(n, b, e);
    if (i > e || j < b)
        return;

    if (b >= i && e <= j)
    {
        lazy[n] += v;
        push(n, b,  e);
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[n] = (t[l]+ t[r]);
}

ll query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
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

    build(1, 1, n);
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
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
        CASES();
    // }
    return 0;
}
