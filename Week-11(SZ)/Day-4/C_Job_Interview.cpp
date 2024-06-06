#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 5e5 + 5;
int n, m;
ll a[2][N], isStrong[2][N], sum[2][N], strongSum[N];

void build()
{
    for (int i = 1; i <= n + m + 1; i++)
    {
        strongSum[i] = strongSum[i - 1] + max(a[0][i], a[1][i]);
        sum[0][i] = sum[0][i - 1] + a[0][i];
        sum[1][i] = sum[1][i - 1] + a[1][i];
        isStrong[0][i] = isStrong[0][i - 1] + (a[0][i] > a[1][i] ? 1 : 0);
        isStrong[1][i] = isStrong[1][i - 1] + (a[1][i] > a[0][i] ? 1 : 0);
    }
}

int bsearch_n(int cancelIdx)
{
    int l = 0, r = n + m + 1, ans = n + m + 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int where = isStrong[0][mid];

        if (mid >= cancelIdx)
        {
            where -= (a[0][cancelIdx] > a[1][cancelIdx]);
        }

        if (where == n)
        {
            r = mid - 1;
            ans = mid;
        }
        else if (where > n)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int bsearch_m(int cancelIdx)
{
    int l = 0, r = n + m + 1, ans = n + m + 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int where = isStrong[1][mid];

        if (mid >= cancelIdx)
        {
            where -= (a[0][cancelIdx] < a[1][cancelIdx]);
        }

        if (where == m)
        {
            r = mid - 1;
            ans = mid;
        }
        else if (where > m)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

ll getStrongSum(int l, int r)
{
    if (l > r)
        return 0;
    return strongSum[r] - strongSum[l - 1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n + m + 1; i++)
            cin >> a[0][i];
        for (int i = 1; i <= n + m + 1; i++)
            cin >> a[1][i];

        build();
        for (int i = 1; i <= n + m + 1; i++)
        {
            int idx_N = bsearch_n(i);
            int idx_M = bsearch_m(i);
            ll ans = 0;

            if (idx_N <= idx_M)
            {
                ans += getStrongSum(1, idx_N);
                ans += sum[1][n + m + 1] - sum[1][idx_N];
                if (i <= idx_N)
                {
                    ans -= max(a[0][i], a[1][i]);
                }
                else
                {
                    ans -= a[1][i];
                }
            }
            else
            {
                ans += getStrongSum(1, idx_M);
                ans += sum[0][n + m + 1] - sum[0][idx_M];
                if (i <= idx_M)
                {
                    ans -= max(a[0][i], a[1][i]);
                }
                else
                {
                    ans -= a[0][i];
                }
            }
            cout << ans << " ";
        }
        cout << '\n';
    }
    return 0;
}