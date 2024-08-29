#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans(n, 0);
    int tmp = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (tmp != 0 || a[i] != 0)
        {
            ans[i] = 1;
            tmp = max(tmp, a[i]);
            tmp--;
        }
        else
        {
            tmp = a[i];
        }
    }

    for (int val : ans)
        cout << val << ' ';
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        CASES();
    }
    return 0;
}