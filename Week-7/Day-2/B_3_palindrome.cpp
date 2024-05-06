#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string ans = "", cons = "aabb";
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (k == 4)
            k = 0;
        ans += cons[k];
        k++;
    }
    cout << ans << '\n';
    return 0;
}