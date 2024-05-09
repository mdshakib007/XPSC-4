#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, inversions;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // initially
        ll invert1 = 0, ones1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                ones1++;
            else
                invert1 += ones1;
        }

        // one operation
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
                idx = i;
                break;
            }
        }
        ll invert2 = 0, ones2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                ones2++;
            else
                invert2 += ones2;
        }
        if (idx != -1)
            a[idx] = 0;

        // another operation
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
                break;
            }
        }
        ll invert3 = 0, ones3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                ones3++;
            else
                invert3 += ones3;
        }

        inversions = max({invert1, invert2, invert3});
        cout << inversions << '\n';
    }
    return 0;
}