#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<int> st;
    int l = 0, r = 0, ans = 0;
    while (r < n && l <= r)
    {
        if (st.find(a[r]) != st.end())
        {
            while (st.find(a[r]) != st.end())
            {
                st.erase(a[l]);
                l++;
            }
        }
        st.insert(a[r]);
        ans = max(ans, r - l + 1);
        r++;
    }
    cout << ans << '\n';
    return 0;
}