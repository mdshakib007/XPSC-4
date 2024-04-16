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

        if (n == 2)
        {
            cout << 0 << " " << 1 << endl;
            continue;
        }

        int curr = n - 1;
        while (curr > 1)
        {
            cout << curr << " ";

            if ((__lg(curr)) != (__lg(curr - 1)))
                break;
            curr--;
        }
        for (int i = 0; i < curr; i++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}