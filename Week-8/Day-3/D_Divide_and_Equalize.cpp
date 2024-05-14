#include <bits/stdc++.h>
using namespace std;

void prime_factorization(int n, map<int, int> &cnt)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt[i]++;
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        cnt[n]++;
    }
}

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            prime_factorization(arr[i], cnt);
        }

        bool ok = true;
        for (auto [x, y] : cnt)
        {
            if (y % n != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}