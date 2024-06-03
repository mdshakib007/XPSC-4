#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> diff;
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    int maxCustomers = 0, sum = 0;
    for (auto pr : diff)
    {
        sum += pr.second;
        maxCustomers = max(maxCustomers, sum);
    }
    cout << maxCustomers << '\n';
    return 0;
}