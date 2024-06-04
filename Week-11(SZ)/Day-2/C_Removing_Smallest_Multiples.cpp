#include <bits/stdc++.h>
using namespace std;

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
        string s;
        cin >> s;

        vector<bool> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
                a[i] = true;
            else
                a[i] = false;
        }

        vector<int> cost(n + 1);
        for (int i = n; i >= 1; i--)
        {
            for (int j = i; j <= n; j += i)
            {
                if (a[j])
                    break;
                else
                    cost[j] = i;
            }
        }

        long long total_cost = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!a[i])
                total_cost += cost[i];
        }
        cout << total_cost << '\n';
    }
    return 0;
}