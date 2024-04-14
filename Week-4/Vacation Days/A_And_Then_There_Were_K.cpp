#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int N = 1e9 + 2;
vector<int> v;

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
        ll ans = 1;
        while (ans <= n)
        {
            ans *= 2;
        }
        ans /= 2;
        ans--;
        cout << ans << endl;
    }
    return 0;
}