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

    int minIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[minIdx])
            minIdx = i;
    }

    for (int i = minIdx + 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            cout << -1 << '\n';
            return;
        }
    }
    cout << minIdx << '\n';
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