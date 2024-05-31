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
        int k;
        cin >> k;
        string str;
        cin >> str;

        int x = 0, y = 0;
        for (char c : str)
        {
            if (c == 'N')
                y++;
            if (c == 'S')
                y--;
            if (c == 'E')
                x++;
            if (c == 'W')
                x--;
        }

        if ((abs(x) % 2 == 1 || abs(y) % 2 == 1))
        {
            cout << "NO\n";
            continue;
        }
        if (k == 2 && x == 0 && y == 0)
        {
            cout << "NO\n";
            continue;
        }

        string ans = "";
        char who[] = {'R', 'H'};
        int n = 0, s = 0, e = 1, w = 1;
        for (auto ch : str)
        {
            if (ch == 'N')
                ans += who[n], n = 1 - n;
            else if (ch == 'S')
                ans += who[s], s = 1 - s;
            else if (ch == 'W')
                ans += who[w], w = 1 - w;
            else
                ans += who[e], e = 1 - e;
        }

        cout << ans << '\n';
    }
    return 0;
}