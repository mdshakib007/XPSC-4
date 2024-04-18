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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 0; i <= 12; i++)
        {
            bool ones = false, zeros = false;
            for (int j = 0; j < n; j++)
            {
                bitset<13> bit(a[j]);
                if (bit[i] == 1)
                    ones = true;
                else
                    zeros = true;
            }
            if (ones && zeros)
                ans += (1 << i);
        }
        cout << ans << endl;
    }
    return 0;
}