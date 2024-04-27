#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e4;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> pw;
    for (int i = 1; i <= N; i++)
    {
        pw.push_back(pow(i, 3));
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool found = false;

        for (int i = 0; i < N; i++)
        {
            if (pw[i] >= x)
                break;

            ll need = x - pw[i];
            int l = 0, r = N - 1, mid;
            bool ok = false;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ok)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}