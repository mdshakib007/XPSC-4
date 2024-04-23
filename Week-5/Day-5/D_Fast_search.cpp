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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while (q--)
    {
        int left, right;
        cin >> left >> right;

        int l = lower_bound(a.begin(), a.end(), left) - a.begin();
        int r = upper_bound(a.begin(), a.end(), right) - a.begin() - 1;

        if (l <= r)
        {
            cout << (r - l + 1) << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    return 0;
}
