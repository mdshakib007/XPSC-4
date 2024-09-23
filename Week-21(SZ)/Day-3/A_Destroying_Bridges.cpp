#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n, k;
    cin >> n >> k;

    if (k >= n - 1)
        cout << 1 << '\n';
    else
        cout << n << '\n';
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