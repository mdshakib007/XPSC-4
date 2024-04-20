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
        int n, totalCost;
        cin >> n >> totalCost;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += (i+1);
        }

        sort(a.begin(), a.end());
        int ans = 0, currCost = 0;
        for (int i = 0; i < n; i++)
        {
            if (currCost + a[i] <= totalCost)
            {
                currCost += a[i];
                ans++;
            }
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}