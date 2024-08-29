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

    if (count(a.begin(), a.end(), a[0]) == n)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    while (l < r)
    {
        cout << a[l] << ' ' << a[r] << ' ';
        l++, r--;
        if (l == r)
            cout << a[l] << ' ';
    }
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