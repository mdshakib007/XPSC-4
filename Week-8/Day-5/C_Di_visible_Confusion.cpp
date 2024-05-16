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
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        bool ans = true;
        for (int i = 1; i <= n; i++)
        {
            int k = 0;
            for (int j = 2; j <= i + 1; j++)
            {
                if (arr[i] % j != 0)
                {
                    k = 1;
                    break;
                }
            }
            if (k == 0)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}