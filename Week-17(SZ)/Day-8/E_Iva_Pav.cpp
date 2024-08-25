#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5 + 5;
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
    t[n] = t[l] & t[r];
}

int query(int n, int b, int e, int i, int j)
{
    if (j < b || i > e)
        return -1;

    if (i <= b && j >= e)
        return t[n];

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    int left = query(l, b, mid, i, j);
    int right = query(r, mid + 1, e, i, j);

    if (left == -1)
        return right;
    if (right == -1)
        return left;

    return (left & right);
}

int b_search(int l, int k, int n)
{
    int low = l, high = n, mid = 0, ans = -1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        int curr = query(1, 1, n, l, mid);
        if (curr >= k)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

void CASES()
{
    int n, q;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> q;

    build(1, 1, n);
    while (q--)
    {
        int l, k;
        cin >> l >> k;

        cout << b_search(l, k, n) << ' ';
    }
    cout << '\n';
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