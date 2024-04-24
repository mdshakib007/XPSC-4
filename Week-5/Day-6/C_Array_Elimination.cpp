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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> v(32);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 32; j++)
            {
                if (a[i] & (1 << j))
                    v[j]++;
            }
        }

        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            bool flag = true;
            for (int j = 0; j < 32; j++)
            {
                if (v[j] % i != 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                ans.push_back(i);
            }
        }

        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}