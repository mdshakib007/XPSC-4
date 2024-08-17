#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = n - 1, i = 0;
    while (s[i] == 'B')
        ans--, i++;

    i = n - 1;
    while (s[i] == 'A')
        ans--, i--;

    if (ans < 0)
        ans = 0;
    cout << ans << '\n';
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