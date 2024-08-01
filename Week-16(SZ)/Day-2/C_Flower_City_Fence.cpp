#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n+1), b(n+1, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (a[1] != n)
    {
        cout << "NO\n";
        return;
    }

    for (int i = 1; i <= n; i++)
        b[a[i]]++;

    for (int i = n - 1; i >= 1; i--)
        b[i] += b[i + 1];

    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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