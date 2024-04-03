#include <bits/stdc++.h>
#define ll long long
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<int> st;
        bool occur[n + 1] = {false};
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            st.insert(a[i]);
            if (occur[a[i]] == true)
            {
                ans = n - st.size();
                break;
            }
            else
                occur[a[i]] = true;;
        }
        cout << ans << '\n';
    }
    return 0;
}