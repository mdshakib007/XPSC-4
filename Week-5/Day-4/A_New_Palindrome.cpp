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
        string s;
        cin >> s;

        int freq[26] = {0};
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                cnt++;
            }
        }

        if (cnt == 1)
        {
            cout << "NO\n";
        }
        else if (cnt == 2)
        {
            int isOk = 0;
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] >= 2)
                {
                    isOk++;
                }
            }
            if (isOk == 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}