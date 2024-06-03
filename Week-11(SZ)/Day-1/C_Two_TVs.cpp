#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> diff;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    int num_tvs = 0;
    for (auto pr : diff)
    {
        num_tvs += pr.second;
        if (num_tvs > 2)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}