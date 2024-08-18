#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];

    vector<int> suff(n);
    suff[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + (c[i] == c[n - 1]);
    }

    if (c[0] == c[n - 1])
    {
        if (suff[0] % k == 0 || suff[0] >= k)
        {
            cout << "YES\n";
            return;
        }
    }

    int ok = 0, cnt = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        cnt += (c[i] == c[0]);
        if (cnt % k == 0 && suff[i + 1] >= k)
        {
            ok = 1;
            break;
        }
    }

    if (ok)
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