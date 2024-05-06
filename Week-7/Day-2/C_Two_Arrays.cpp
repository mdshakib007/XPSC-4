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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (!(a[i] == b[i] || a[i] + 1 == b[i]))
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