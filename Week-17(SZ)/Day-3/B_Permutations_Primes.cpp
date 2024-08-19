#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1\n";
        return;
    }

    if (n == 2)
    {
        cout << "2 1\n";
        return;
    }

    vector<int> ans(n, -1);
    ans[n / 2] = 1;
    ans[0] = 2;
    ans[n - 1] = 3;

    int curr = 4;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == -1)
        {
            ans[i] = curr;
            curr++;
        }
    }

    for (int i : ans)
    {
        cout << i << ' ';
    }
    cout << '\n';
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