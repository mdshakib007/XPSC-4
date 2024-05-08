#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;

        int init = -1, curr = -1, flag = 0;
        while (q--)
        {
            int x;
            cin >> x;
            if (flag)
            {
                if (x >= curr && x <= init)
                {
                    cout << 1;
                    curr = x;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if (init == -1)
                {
                    init = x;
                    curr = x;
                    cout << 1;
                }
                else if (x >= curr)
                {
                    cout << 1;
                    curr = x;
                }
                else if (x <= init)
                {
                    cout << 1;
                    curr = x;
                    flag = 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}