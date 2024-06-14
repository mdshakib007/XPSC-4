#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int>& a, pair<char, int>& b)
{
    return a.second < b.second;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<pair<char, int>> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = make_pair(s[i], i);

    sort(arr.begin(), arr.end());
    sort(arr.begin() + k, arr.end(), cmp);

    for (int i = k; i < n; i++)
        cout << arr[i].first;
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}