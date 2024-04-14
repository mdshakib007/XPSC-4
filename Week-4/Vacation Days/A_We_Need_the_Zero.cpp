#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

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
        int a[n];
        int exor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            exor ^= a[i];
        }

        if (exor == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2 != 0)
                cout << exor << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}