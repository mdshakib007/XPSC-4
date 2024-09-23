#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n, k;
    cin >> n >> k;

    vector<int> ans;
    int curr = 1, plus = 1;
    while (n > 0 && k - curr >= n - 1)
    {
        ans.push_back(curr);
        curr += plus;
        plus++;
        n--;
    }

    curr = ans.back();
    while (n--)
    {
        ans.push_back(curr + 1);
        curr++;
    }

    for (int val : ans)
        cout << val << ' ';
    cout << '\n';
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