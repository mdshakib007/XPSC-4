#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
        
    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());
    int c1 = count(a.begin(), a.end(), mn);
    int c2 = count(a.begin(), a.end(), mx);

    if (c1 == n)
        cout << 1ll * n * (n - 1) << "\n";
    else
        cout << 2ll * c1 * c2 << "\n";
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