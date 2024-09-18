#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    string s;
    cin >> s;

    vector<int> vis(n, 0), ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vector<int> c;
            int black = 0, x = i;

            while (!vis[x])
            {
                vis[x] = 1;
                c.push_back(x);
                if (s[x] == '0')
                    black++;
                x = a[x];
            }
            for (int i : c)
                ans[i] = black;
        }
    }

    for (int val : ans)
        cout << val << ' ';
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