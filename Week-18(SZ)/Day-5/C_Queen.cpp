#include <bits/stdc++.h>
using namespace std;

void CASES()
{
    int n, i;
    cin >> n;
    vector<int> t(n + 1, 0), v(n + 1, 1);
    for (i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y > 0)
            t[i] = 1;
        else if (x != -1)
            v[x] = y;
    }

    bool ok = false;
    for (i = 1; i <= n; i++)
    {
        if (t[i] && v[i])
        {
            ok = true;
            cout << i << ' ';
        }
    }
    if (!ok)
        cout << -1;
    cout << '\n';
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