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
        {
            cin >> a[i];
        }

        ll sum = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                neg++;
                a[i] = -a[i];
            }
            sum += a[i];
        }

        sort(a.begin(), a.end());
        if(neg & 1) sum -= 2 * a[0];
        cout << sum << endl;
    }
    return 0;
}