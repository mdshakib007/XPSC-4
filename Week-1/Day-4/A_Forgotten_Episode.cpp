#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 1; i <= n; i++)
    {
        if (a[i - 1] != i)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
