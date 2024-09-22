#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    n *= 2;
    int k = n;
    for (int i = 1; i <= (n / 2); i += 2)
    {
        cout << i << ' ' << k << '\n';
        k--;
    }
    for (int i = 2; i <= (n / 2); i += 2)
    {
        cout << i << ' ' << k << '\n';
        k--;
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