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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, r = k;
        int cnt = 0;
        while (r <= n)
        {
            bool isValid = false;
            for (int i = l; i < r; i++)
            {
                if (a[i] % 2 != 0)
                {
                    isValid = true;
                    break;
                }
            }
            l++;
            r++;
            if (isValid)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}