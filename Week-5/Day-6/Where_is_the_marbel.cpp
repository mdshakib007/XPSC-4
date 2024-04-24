#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 0;
    while (true)
    {
        cases++;
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << "CASE# " << cases << ":\n";
        
        while (q--)
        {
            int x;
            cin >> x;
            int l = 0, r = n - 1, idx = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (x == a[mid])
                {
                    idx = mid;
                    break;
                }
                if (x > a[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (idx != -1)
            {
                cout << x << " found at " << idx + 1 << endl;
            }
            else
            {
                cout << x << " not found" << endl;
            }
        }
    }
    return 0;
}