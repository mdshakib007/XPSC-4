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

        stack<char> stk;
        vector<char> v;
        for (char c : s)
        {
            if (c == '(')
            {
                stk.push(c);
            }
            else
            {
                if (!stk.empty() && stk.top() == '(')
                    stk.pop();
                else
                    v.push_back(c);
            }
        }
        cout << v.size() << "\n";
    }
    return 0;
}