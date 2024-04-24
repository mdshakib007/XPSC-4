#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        // upper bound finding
        int l = 0, r = n - 1, small = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] < x)
            {
                small = a[mid];
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        // lower bound finding
        l = 0, r = n - 1;
        int big = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] > x)
            {
                big = a[mid];
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (small == -1)
            cout << 'X' << " ";
        else
            cout << small << " ";

        if (big == -1)
            cout << "X" << endl;
        else
            cout << big << endl;
    }
    return 0;
}