#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
        vector<vector<int>> v(n, vector<int>(n - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
            }
        }

        vector<pair<int, int>> last;
        map<int, int> freq;
        int uniqueIndex = 0, extra = 0;
        for (int i = 0; i < n; i++)
        {
            last.push_back({i, v[i][n - 2]});
            freq[v[i][n - 2]]++;
        }
        for (pair<int, int> pr : last)
        {
            if (freq[pr.second] == 1)
                uniqueIndex = pr.first;
            else
                extra = pr.second;
        }

        vector<int> ans;
        for (int i = 0; i < n - 1; i++)
        {
            ans.push_back(v[uniqueIndex][i]);
        }
        ans.push_back(extra);

        // print permutation
        for (int i : ans)
            cout << i << " ";
        cout << '\n';
    }
    return 0;
}
