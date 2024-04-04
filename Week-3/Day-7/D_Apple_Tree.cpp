#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 5;
vector<int> adj[N];
vector<ll> leafs;

void dfs(int src, int curr)
{
    bool found = false;
    for (auto child : adj[curr])
    {
        if (child == src)
            continue;
        found = true;
        dfs(curr, child);
        leafs[curr] += leafs[child];
    }
    if (!found)
    {
        leafs[curr] = 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
            adj[i].clear();
        leafs.assign(n + 5, 0);

        for (int i = 1; i <= n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int src = 1;
        dfs(src, src);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            ll ans = leafs[x] * leafs[y];
            cout << ans << endl;
        }
    }
    return 0;
}
