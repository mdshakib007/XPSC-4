#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    int even = 0, odd = 0;
    vector<int> e, o;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            even++;
            e.push_back(i+1);
        }
        else
        {
            odd++;
            o.push_back(i+1);
        }
    }
    if (odd >= 3)
    {
        cout << "YES\n";
        cout << o[0] << ' ' << o[1] << ' ' << o[2] << '\n';
    }
    else if (odd >= 1 && even >= 2)
    {
        cout << "YES\n";
        cout << o[0] << ' ' << e[0] << ' ' << e[1] << '\n';
    }
    else
    {
        cout << "NO\n";
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