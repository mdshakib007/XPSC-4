#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 131080;
int a[N], t[4 * N];

void merge(int n, int b, int e, int l, int r)
{
    int k = e - b + 1;
    for (int i = 1; i <= 17; i++)
    {
        if ((1 << i) == k)
        {
            if (i % 2 == 1)
            {
                t[n] = t[l] | t[r];
                return;
            }
            else
            {
                t[n] = t[l] ^ t[r];
                return;
            }
        }
    }
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

    merge(n, b, e, l, r);
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

    merge(n, b, e, l, r);
}

void CASES()
{
    int n, m;
    cin >> n >> m;
    n = (1 << n);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);
    while (m--)
    {
        int i, v;
        cin >> i >> v;
        update(1, 1, n, i, v);

        cout << t[1] << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while(t--)
    // {
    CASES();
    // }
    return 0;
}