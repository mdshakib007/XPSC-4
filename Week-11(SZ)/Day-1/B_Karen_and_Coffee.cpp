#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> diff(N, 0);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        diff[t1]++;
        diff[t2 + 1]--;

        mx = max(mx, t1);
        mx = max(mx, t2);
    }

    vector<int> a, pref(N);
    for (int i = 1; i <= mx; i++)
    {
        pref[i] = pref[i - 1] + diff[i];
        if (pref[i] >= k)
            a.push_back(i);
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (a.size() >= 1)
        {
            int l = 0, r = a.size() - 1, mid = 0, idx1 = 0, idx2 = 0;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (a[mid] >= x)
                {
                    idx1 = mid;
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }

            l = 0, r = a.size() - 1;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (a[mid] <= y)
                {
                    idx2 = mid;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }

            if ((idx1 <= idx2) && (a[idx1] >= x && a[idx1] <= y) && (a[idx2] >= x && a[idx2] <= y))
                cout << (idx2 - idx1) + 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else
            cout << 0 << '\n';
    }
    return 0;
}