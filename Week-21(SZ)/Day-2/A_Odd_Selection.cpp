#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int odd_cnt = 0, even_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 1)
            odd_cnt++;
        else
            even_cnt++;
    }

    if (!odd_cnt)
    {
        cout << "NO\n";
        return;
    }

    x--, odd_cnt--;
    while (odd_cnt >= 2 && x >= 2)
    {
        odd_cnt -= 2;
        x -= 2;
    }

    if (x <= even_cnt)
        cout << "YES\n";
    else
        cout << "NO\n";
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