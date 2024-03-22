#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == x)
            a[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            cout << a[i] << " ";
    }

    return 0;
}