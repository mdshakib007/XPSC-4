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

    int idx = -1;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= l && a[i] <= r)
        {
            if (a[i] == r)
                r++;
        }
        else
        {
            idx = i+1;
            break;
        }
    }
    cout << idx << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while(t--)
    // {
    CASES();
    // }
    return 0;
}