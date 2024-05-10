#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n + 1);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        a[n] = ((n * (n + 1)) / 2) - sum;

        ll curr = (a.size() - (k % a.size()));
        for (int i = curr; i <= n; i++)
            cout << a[i] << " ";
        for (int i = 0; i < curr - 1; i++)
            cout << a[i] << " ";
        cout << '\n';
    }
    return 0;
}