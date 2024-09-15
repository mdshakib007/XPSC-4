#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 5;
ll t[4 * N], lazy[4 * N];

void push(int n, int b, int e)
{
    if (lazy[n] == 0)
        return;

    t[n] = (e - b + 1) - t[n];

    if (b != e)
    {
        int l = 2 * n, r = 2 * n + 1;
        lazy[l] ^= lazy[n];
        lazy[r] ^= lazy[n];
    }
    lazy[n] = 0;
}

void build(int n, int b, int e, const string &bin)
{
    lazy[n] = 0;
    if (b == e)
    {
        t[n] = bin[b - 1] - '0';
        return;
    }

    int mid = (b + e) / 2, l = 2*n, r = 2*n+1;
    build(l, b, mid, bin);
    build(r, mid + 1, e, bin);

    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (i > e || j < b)
        return; 

    if (b >= i && e <= j)
    {
        lazy[n] ^= 1; 
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2, l = 2*n, r = 2*n+1;
    update(l, b, mid, i, j);
    update(r, mid + 1, e, i, j);

    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int idx)
{
    push(n, b, e);
    if (b == e)
    {
        return t[n];
    }

    int mid = (b + e) / 2, l = 2*n, r = 2*n+1;
    if (idx <= mid)
        return query(l, b, mid, idx);
    else
        return query(r, mid + 1, e, idx);
}

void CASES()
{
    string bin;
    int q;
    cin >> bin >> q;

    int n = bin.size();
    build(1, 1, n, bin);

    while (q--)
    {
        char type;
        int i, j;
        cin >> type;

        if (type == 'I')
        {
            cin >> i >> j;
            update(1, 1, n, i, j);
        }
        else if (type == 'Q')
        {
            cin >> i;
            cout << query(1, 1, n, i) << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cout << "Case " << t << ":\n";
        CASES();
    }

    return 0;
}
