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
        int x;
        cin >> x;
        int a = 0, b = 0;
        bool isFirstSetBit = true;

        for (int i = 30; i >= 0; i--)
        {
            if (x & (1 << i))
            {
                if (isFirstSetBit)
                {
                    if (i != 0)
                    {
                        b |= (1 << i);
                        isFirstSetBit = false;
                    }
                    else
                    {
                        a |= (1 << i);
                    }
                }
                else
                {
                    a |= (1 << i);
                }
            }
        }
        cout << min(a, b) << " " << max(a, b) << "\n";
    }
    return 0;
}