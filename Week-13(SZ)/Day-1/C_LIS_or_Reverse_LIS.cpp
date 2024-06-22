#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int ones = 0, multi = 0;
    for (auto [val, fr] : freq)
    {
        if (fr == 1)
            ones++;
        else
            multi++;
    }

    cout << multi + (ones + 1) / 2 << '\n';
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