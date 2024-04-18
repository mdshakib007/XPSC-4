#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = (1 << n);
    bool flag = false;
    for (int i = 0; i < mx; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
                sum += a[j];
            else
                sum -= a[j];
        }
        if (sum % 360 == 0)
            flag = true;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}