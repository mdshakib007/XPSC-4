#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 3e5 + 9;
int n;
string s;
vector<int> adj[N], form(N);

void dfs(int u)
{
    if (adj[u][0] != 0)
    {
        int v = adj[u][0];
        if (s[u - 1] != 'L')
            form[v] = form[u] + 1;
        else
            form[v] = form[u];

        dfs(v);
    }
    if (adj[u][1] != 0)
    {
        int v = adj[u][1];
        if (s[u - 1] != 'R')
            form[v] = form[u] + 1;
        else
            form[v] = form[u];

        dfs(v);
    }
}

void CASES()
{
    cin >> n;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        adj[i].clear();
        form[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[i].push_back(u);
        adj[i].push_back(v);
    }

    dfs(1);

    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (adj[i][0] == 0 && adj[i][1] == 0)
        {
            ans = min(ans, form[i]);
        }
    }
    cout << ans << '\n';
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