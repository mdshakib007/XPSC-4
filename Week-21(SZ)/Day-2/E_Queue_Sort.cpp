#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int min_idx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[min_idx] > a[i])
        {
            min_idx = i;
        }
    }

    for (int i = min_idx; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << -1 << '\n';
            return;
        }
    }

    cout << min_idx << '\n';
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