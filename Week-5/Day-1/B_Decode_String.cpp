#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int k = stoi(s.substr(i - 2, 2));
                char c = k + 'a' - 1;
                ans += c;
                i -= 2;
            }
            else
            {
                int k = s[i] - '0';
                char c = k + 'a' - 1;
                ans += c;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}