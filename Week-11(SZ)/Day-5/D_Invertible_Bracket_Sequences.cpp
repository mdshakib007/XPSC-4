#include <bits/stdc++.h>
using namespace std;

const int K = 25;
const int N = 2e5 + 5;
int st[N][K + 1];
int logg[N + 1];

void initLog()
{
    logg[1] = 0;
    for (int i = 2; i <= N; i++)
    {
        logg[i] = logg[i / 2] + 1;
    }
}

void sparseTable(const vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
        st[i][0] = a[i];

    for (int j = 1; j <= K; j++)
    {
        for (int i = 0; i + (1 << j) <= n; i++)
        {
            st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
}

int query(int l, int r)
{
    int j = logg[r - l + 1];
    return max(st[l][j], st[r - (1 << j) + 1][j]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    initLog();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            a[i] = a[i - 1] + (s[i - 1] == '(' ? 1 : -1);
        }
        sparseTable(a);

        long long ans = 0;
        map<int, deque<int>> mp;
        for (int i = 0; i <= n; i++)
        {
            deque<int> &curr = mp[a[i]];
            while (!curr.empty())
            {
                int pos = curr.front();
                int mx = query(pos, i);
                if (a[i] - (mx - a[i]) < 0)
                    curr.pop_front();
                else
                    break;
            }
            ans += curr.size();
            mp[a[i]].push_back(i);
        }
        cout << ans << '\n';
    }
    return 0;
}
