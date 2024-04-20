#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int n = a.size(), m = b.size(), lcs = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x = i, y = j, currLen = 0;
                while (x < n && y < m && a[x] == b[y])
                {
                    x++;
                    y++;
                    currLen++;
                }
                lcs = max(lcs, currLen);
            }
        }
        cout << n + m - 2 * lcs << endl;
    }
    return 0;
}
