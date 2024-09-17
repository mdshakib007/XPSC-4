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

    sort(a.begin(), a.end());

    ll spell = 0;
    if (a[0] != 1)
    {
        spell += (a[0] - 1);
        a[0] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1] + 1)
        {
            spell += (a[i] - (a[i - 1] + 1));
            a[i] = a[i - 1] + 1;
        }
    }

    cout << spell << '\n';
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