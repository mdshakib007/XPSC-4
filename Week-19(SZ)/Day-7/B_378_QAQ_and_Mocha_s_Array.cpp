#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
int a[N];

bool isBeautiful(int n)
{
    sort(a + 1, a + n + 1);
    vector<int> b;

    for (int i = 2; i <= n; i++)
    {
        if (a[i] % a[1] != 0)
            b.push_back(a[i]);
    }

    sort(b.begin(), b.end());
    n = b.size();
    for (int i = 1; i < n; i++)
    {
        if (b[i] % b[0] != 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                flag = true;
        }

        if (flag)
            cout << "YES\n";
        else if (isBeautiful(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}