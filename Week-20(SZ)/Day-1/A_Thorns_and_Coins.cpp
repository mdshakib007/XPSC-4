#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int coins = 0, blocked = false;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == '@')
            coins++;
        else if (s[i] == '*' && s[i + 1] == '*')
        {
            blocked = true;
            break;
        }
    }

    if (!blocked && s[n - 1] == '@')
        coins++;
    cout << coins << '\n';
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