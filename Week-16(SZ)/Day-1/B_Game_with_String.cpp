#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    string s;
    cin >> s;

    stack<char> stk;
    int ans = 0;
    for (char c : s)
    {
        if (!stk.empty() && c == stk.top())
        {
            stk.pop();
            ans++;
        }
        else
        {
            stk.push(c);
        }
    }

    if (ans % 2 == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while(t--)
    // {
    CASES();
    // }
    return 0;
}