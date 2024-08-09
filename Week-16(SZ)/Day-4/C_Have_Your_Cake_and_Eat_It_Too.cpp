#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    ll n, target;
    cin >> n;
    ll a[n + 1], b[n + 1], c[n + 1];
    ll i, tot = 0;
    for (i = 1; i <= n; i++)
        cin >> a[i], tot += a[i];
    for (i = 1; i <= n; i++)
        cin >> b[i];
    for (i = 1; i <= n; i++)
        cin >> c[i];

    target = (tot + 2) / 3;
    vector<pair<ll, ll>> ans;
    ll as = 0, bs = 0, cs = 0, af = 0, bf = 0, cf = 0;
    // a b c
    for (int i = 1; i <= n; i++)
    {
        as += a[i];
        if (as >= target)
        {
            af = 1;
            ans.push_back({1, i});
            for (int j = i + 1; j <= n; j++)
            {
                bs += b[j];
                if (bs >= target)
                {
                    bf = 1;
                    ans.push_back({i + 1, j});
                    for (int k = j + 1; k <= n; k++)
                    {
                        cs += c[k];
                    }
                    if (cs >= target)
                    {
                        cf = 1;
                        ans.push_back({j + 1, n});
                        break;
                    }
                }
                if (bf == 1)
                    break;
            }
        }
        if (af == 1)
            break;
    }
    if (af && bf && cf)
    {
        cout << ans[0].first << ' ' << ans[0].second << ' ' << ans[1].first << ' ' << ans[1].second << ' ' << ans[2].first << ' ' << ans[2].second << '\n';
        return;
    }
    ans.clear();

    // a c b
    as = 0, bs = 0, cs = 0, af = 0, bf = 0, cf = 0;
    for (int i = 1; i <= n; i++)
    {
        as += a[i];
        if (as >= target)
        {
            af = 1;
            ans.push_back({1, i});
            for (int j = i + 1; j <= n; j++)
            {
                cs += c[j];
                if (cs >= target)
                {
                    bf = 1;
                    ans.push_back({i + 1, j});
                    for (int k = j + 1; k <= n; k++)
                    {
                        bs += b[k];
                    }
                    if (bs >= target)
                    {
                        cf = 1;
                        ans.push_back({j + 1, n});
                        break;
                    }
                }
                if (bf == 1)
                    break;
            }
        }
        if (af == 1)
            break;
    }
    if (af && bf && cf)
    {
        cout << ans[0].first << " " << ans[0].second << " " << ans[2].first << " " << ans[2].second << " " << ans[1].first << " " << ans[1].second << '\n';
        return;
    }
    ans.clear();
    // b a c
    as = 0, bs = 0, cs = 0, af = 0, bf = 0, cf = 0;
    for (int i = 1; i <= n; i++)
    {
        bs += b[i];
        if (bs >= target)
        {
            af = 1;
            ans.push_back({1, i});
            for (int j = i + 1; j <= n; j++)
            {
                as += a[j];
                if (as >= target)
                {
                    bf = 1;
                    ans.push_back({i + 1, j});
                    for (int k = j + 1; k <= n; k++)
                    {
                        cs += c[k];
                    }
                    if (cs >= target)
                    {
                        cf = 1;
                        ans.push_back({j + 1, n});
                        break;
                    }
                }
                if (bf == 1)
                    break;
            }
        }
        if (af == 1)
            break;
    }
    if (af && bf && cf)
    {
        cout << ans[1].first << " " << ans[1].second << " " << ans[0].first << " " << ans[0].second << " " << ans[2].first << " " << ans[2].second << '\n';
        return;
    }
    ans.clear();
    // b c a
    as = 0, bs = 0, cs = 0, af = 0, bf = 0, cf = 0;
    for (int i = 1; i <= n; i++)
    {
        bs += b[i];
        if (bs >= target)
        {
            af = 1;
            ans.push_back({1, i});
            for (int j = i + 1; j <= n; j++)
            {
                cs += c[j];
                if (cs >= target)
                {
                    bf = 1;
                    ans.push_back({i + 1, j});
                    for (int k = j + 1; k <= n; k++)
                    {
                        as += a[k];
                    }
                    if (as >= target)
                    {
                        cf = 1;
                        ans.push_back({j + 1, n});
                        break;
                    }
                }
                if (bf == 1)
                    break;
            }
        }
        if (af == 1)
            break;
    }
    if (af && bf && cf)
    {
        cout << ans[2].first << " " << ans[2].second << " " << ans[0].first << " " << ans[0].second << " " << ans[1].first << " " << ans[1].second << '\n';
        return;
    }
    ans.clear();
    // c a b
    as = 0, bs = 0, cs = 0, af = 0, bf = 0, cf = 0;
    for (int i = 1; i <= n; i++)
    {
        cs += c[i];
        if (cs >= target)
        {
            af = 1;
            ans.push_back({1, i});
            for (int j = i + 1; j <= n; j++)
            {
                as += a[j];
                if (as >= target)
                {
                    bf = 1;
                    ans.push_back({i + 1, j});
                    for (int k = j + 1; k <= n; k++)
                    {
                        bs += b[k];
                    }
                    if (bs >= target)
                    {
                        cf = 1;
                        ans.push_back({j + 1, n});
                        break;
                    }
                }
                if (bf == 1)
                    break;
            }
        }
        if (af == 1)
            break;
    }
    if (af && bf && cf)
    {
        cout << ans[1].first << " " << ans[1].second << " " << ans[2].first << " " << ans[2].second << " " << ans[0].first << " " << ans[0].second << '\n';
        return;
    }
    ans.clear();
    // c b a;
    as = 0, bs = 0, cs = 0, af = 0, bf = 0, cf = 0;
    for (int i = 1; i <= n; i++)
    {
        cs += c[i];
        if (cs >= target)
        {
            af = 1;
            ans.push_back({1, i});
            for (int j = i + 1; j <= n; j++)
            {
                bs += b[j];
                if (bs >= target)
                {
                    bf = 1;
                    ans.push_back({i + 1, j});
                    for (int k = j + 1; k <= n; k++)
                    {
                        as += a[k];
                    }
                    if (as >= target)
                    {
                        cf = 1;
                        ans.push_back({j + 1, n});
                        break;
                    }
                }
                if (bf == 1)
                    break;
            }
        }
        if (af == 1)
            break;
    }
    if (af && bf && cf)
    {
        cout << ans[2].first << " " << ans[2].second << " " << ans[1].first << " " << ans[1].second << " " << ans[0].first << " " << ans[0].second << '\n';
        return;
    }
    ans.clear();

    cout << -1 << '\n';
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