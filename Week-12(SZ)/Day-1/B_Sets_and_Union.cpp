#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<set<int>> allSet(n);
    set<int> unionSet;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int val;
            cin >> val;
            allSet[i].insert(val);
            unionSet.insert(val);
        }
    }

    int maxSize = 0;
    for (int val : unionSet)
    {
        set<int> tmp;
        for (int i = 0; i < n; i++)
        {
            if (allSet[i].find(val) == allSet[i].end())
            {
                tmp.insert(allSet[i].begin(), allSet[i].end());
            }
        }
        maxSize = max(maxSize, (int)tmp.size());
    }

    cout << maxSize << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
