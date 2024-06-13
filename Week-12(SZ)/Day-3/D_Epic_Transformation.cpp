#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    priority_queue<pair<int, int>> pq;
    for (auto [x, y] : freq)
        pq.push({y, x});

    int sz = n;
    while (pq.size() >= 2)
    {
        auto [cnt1, x] = pq.top();
        pq.pop();
        auto [cnt2, y] = pq.top();
        pq.pop();

        cnt1--, cnt2--;
        sz -= 2;
        if (cnt1 > 0)
            pq.push({cnt1, x});
        if (cnt2 > 0)
            pq.push({cnt2, y});
    }
    cout << sz << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}