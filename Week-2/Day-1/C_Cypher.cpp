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
        int n;
        cin >> n;
        int pattern[n];
        for (int i = 0; i < n; i++)
            cin >> pattern[i];

        for (int i = 0; i < n; i++)
        {
            int k;
            string s;
            cin >> k >> s;

            int init = pattern[i];
            for (char c : s)
            {
                if (c == 'U')
                {
                    if (init == 0)
                        init = 9;
                    else
                        init--;
                }
                else
                {
                    if (init == 9)
                        init = 0;
                    else
                        init++;
                }
            }
            pattern[i] = init;
        }
        for (int i = 0; i < n; i++)
        {
            cout << pattern[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}