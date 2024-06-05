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
        int n, m;
        cin >> n >> m;

        if ((n % 2 == 0) && (m % 2 != 0) || (n > m))
        {
            cout << "NO\n";
        }
        else if (n % 2 == 1)
        {
            cout << "YES\n";
            for (int i = 0; i < n - 1; i++)
                cout << 1 << " ";
            cout << m - n + 1 << '\n';
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n - 2; i++)
                cout << 1 << " ";
            cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << '\n';
        }
    }
    return 0;
}