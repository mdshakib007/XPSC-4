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
        int n, m, x;
        cin >> n >> m >> x;
        set<int> positions;
        positions.insert(x);

        while (m--)
        {
            int v;
            char c;
            cin >> v >> c;

            set<int> next;
            for (int u : positions)
            {
                if (c == '?' || c == '0')
                {
                    int k = (u + v - 1) % n + 1;
                    next.insert(k);
                }
                if (c == '?' || c == '1')
                {
                    int k = (u - v - 1 + n) % n + 1;
                    next.insert(k);
                }
            }
            positions = next;
        }

        cout << positions.size() << '\n';
        for (int i : positions)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}