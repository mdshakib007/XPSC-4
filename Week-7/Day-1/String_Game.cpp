#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 1)
        {
            cout << "Ramos\n";
            continue;
        }

        stack<char> stk;
        int cnt = 0;
        for (char c : s)
        {
            if (!stk.empty() && stk.top() != c)
            {
                stk.pop();
                cnt++;
            }
            else
            {
                stk.push(c);
            }
        }
        if (cnt % 2 == 0)
            cout << "Ramos\n";
        else
            cout << "Zlatan\n";
    }
    return 0;
}