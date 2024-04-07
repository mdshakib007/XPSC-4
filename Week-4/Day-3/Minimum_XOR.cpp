#include <bits/stdc++.h>
#define ll long long
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
        int n;
        cin >> n;
        int a[n], XOR = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }

        int ans = XOR;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, (XOR ^ a[i]));
        }
        cout << ans << endl;
    }
    return 0;
}