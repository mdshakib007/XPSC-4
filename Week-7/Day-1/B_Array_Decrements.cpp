#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 7;

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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int minDiff = N;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != 0)
                minDiff = min(minDiff, a[i] - b[i]);
        }

        if (minDiff < 0)
        {
            cout << "NO\n";
            continue;
        }
        if (minDiff == N)
        {
            cout << "YES\n";
            continue;
        }

        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] - b[i] > minDiff) || (b[i] != 0 && a[i] - b[i] < minDiff))
            {
                possible = false;
                break;
            }
        }
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}