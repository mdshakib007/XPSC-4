#include <bits/stdc++.h>
using namespace std;

void CASES()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    int curr = m - 1;
    int del = 0, imp = 0;
    for (char c : s)
    {
        if (c == 'L')
            curr = m;
        else if (c == 'W' && curr <= 0)
            del++;
        else if (c == 'C' && curr <= 0)
            imp++;
        curr--;
    }

    if (del > k)
        imp++;
    if (imp)
        cout << "NO\n";
    else
        cout << "YES\n";
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