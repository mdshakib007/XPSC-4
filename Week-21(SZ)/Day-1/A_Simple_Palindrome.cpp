#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;

    string k = "aeiou", tot = "";
    for (int i = 0; i <= 200; i += 5)
        tot += k;

    string ans = "";
    for (int i = 0; i < n; i++)
        ans.push_back(tot[i]);
    sort(ans.begin(), ans.end());

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