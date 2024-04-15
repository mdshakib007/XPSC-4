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
        int x;
        cin >> x;

        int tmp = x;
        vector<int> v;
        while (tmp != 0)
        {
            v.push_back(tmp % 2);
            tmp = tmp >> 1;
        }

        int ans = 0, k = 0;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                k++;
            }
            else
            {
                if (k >= 2)
                    ans++;
            }
        }
        cout << (1 << ans) << endl;
    }
    return 0;
}