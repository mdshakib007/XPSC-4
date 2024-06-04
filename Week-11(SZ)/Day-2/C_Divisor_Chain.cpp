#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        vector<int> ans;
        ans.push_back(x);

        while ((x & (x - 1)) != 0)
        {
            int pw = (x & -x);
            x -= pw;
            ans.push_back(x);
        }

        while (x > 1)
        {
            x /= 2;
            ans.push_back(x);
        }

        cout << ans.size() << '\n';
        for (int val : ans)
        {
            cout << val << ' ';
        }
        cout << '\n';
    }
    return 0;
}
