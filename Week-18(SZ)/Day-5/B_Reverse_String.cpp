#include <bits/stdc++.h>
using namespace std;
#define ll long long

void CASES()
{
    string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size();
    bool possible = false;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n && curr < m; j++)
        {
            if (a[j] != b[curr])
                break;

            int x = ++curr;
            for (int k = j - 1; k >= 0 && x < m; k--)
            {
                if (a[k] != b[x])
                    break;
                x++;
            }
            if (x == m)
            {
                possible = true;
                break;
            }
        }
        if (possible)
            break;
    }
    if (possible)
        cout << "YES\n";
    else
        cout << "NO\n";
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
