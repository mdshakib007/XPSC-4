#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int x;
    cin >> x;
    int a = 0, b = 0;
    bool set_bit = true;

    for (int i = 30; i >= 0; i--)
    {
        if (x & (1 << i))
        {
            if (set_bit)
            {
                if (i != 0)
                {
                    b |= (1 << i);
                    set_bit = false;
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