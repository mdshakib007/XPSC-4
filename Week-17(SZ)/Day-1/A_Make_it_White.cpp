#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (l == -1)
                l = i, r = i;
            else
                r = i;
        }
    }
    cout << r - l + 1 << '\n';
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