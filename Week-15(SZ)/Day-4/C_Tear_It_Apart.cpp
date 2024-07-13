#include <bits/stdc++.h>
using namespace std;

void CASES()
{
    string s;
    cin >> s;

    int n = s.size(), maxi = INT_MAX;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int curr = 0, mx = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != s[j])
            {
                curr++;
                if (curr > mx)
                    mx = curr;
            }
            else
            {
                curr = 0;
            }
        }
        if (maxi > mx)
            maxi = mx;
    }

    if (maxi == 0)
        cout << 0 << '\n';
    else
    {
        int k = 0;
        while (maxi != 1)
        {
            maxi /= 2;
            k++;
        }
        cout << k + 1 << '\n';
    }
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