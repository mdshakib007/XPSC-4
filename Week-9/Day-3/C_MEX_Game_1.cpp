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
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int cnt = 0;
        for (int i = 0; i < n + 1; i++)
        {
            if (freq[i] == 1)
                cnt++;
            if (cnt == 2 || freq[i] == 0)
            {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}