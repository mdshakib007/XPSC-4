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

    if (n % 2 == 1)
    {
        cout << "NO\n";
        return;
    }

    sort(a.begin(), a.end());
    vector<int> ans;
    int i = 0, j = n / 2;
    while (i < n / 2 && j < n)
    {
        ans.push_back(a[i]);
        ans.push_back(a[j]);
        i++, j++;
    }
    // for circular condition check
    ans.push_back(ans[0]);
    ans.push_back(ans[1]);

    bool flag = true;
    for (int k = 1; k < ans.size() - 1; k++)
    {
        if (!((ans[k - 1] > ans[k] && ans[k + 1] > ans[k]) || (ans[k - 1] < ans[k] && ans[k + 1] < ans[k])))
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    else
    {
        cout << "NO\n";
    }
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