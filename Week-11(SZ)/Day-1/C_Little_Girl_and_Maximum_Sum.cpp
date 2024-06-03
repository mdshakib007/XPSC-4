#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 2, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> diff(n + 2, 0);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i <= n + 1; i++)
        diff[i] = diff[i] + diff[i - 1];

    // for (int i : diff)
    //     cout << i << " ";

    sort(a.begin(), a.end(), greater<int>());
    sort(diff.begin(), diff.end(), greater<int>());

    long long sum = 0;
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j < diff[i]; j++)
        {
            sum += a[i];
        }
    }
    cout << sum << '\n';

    return 0;
}