#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<string> st;
    string ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.find(v[i]) == st.end())
        {
            ans += v[i].substr(v[i].size() - 2);
            st.insert(v[i]);
        }
    }
    cout << ans << "\n";
    return 0;
}