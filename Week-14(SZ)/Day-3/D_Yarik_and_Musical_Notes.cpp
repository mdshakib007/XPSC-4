#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> freq;
    ll pairs = 0;
    for (int i = 0; i < n; i++)
    {
        pairs += freq[a[i]];
        if (a[i] == 1)
            pairs += freq[2];
        else if (a[i] == 2)
            pairs += freq[1];
        freq[a[i]]++;
    }
    cout << pairs << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        CASES();
    }
    return 0;
}