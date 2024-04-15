#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int nd = -1;
        for (int i = 0; i < n; i++)
        {
            if ((v[i] & k) == k)
                nd &= v[i];
        }
        if (nd == k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}