#include <bits/stdc++.h>
// #define ll long long
using namespace std;

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

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
        vector<int> a(n), ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 11; j++)
            {
                if (a[i] % primes[j] == 0)
                {
                    a[i] = j;
                    break;
                }
            }
            ans.push_back(a[i]);
        }

        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        cout << ans.size() << '\n';
        for (int i = 0; i < n; i++)
        {
            int x = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin() + 1;
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}