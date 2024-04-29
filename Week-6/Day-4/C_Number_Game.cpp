#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

bool isWon(vector<int> &a, int n, int k)
{
    multiset<int> mset;
    for (int i : a)
    {
        mset.insert(i);
    }

    for (int i = 1; i <= k; i++)
    {
        if (mset.empty())
            return false;

        int toRemove = k - i + 1;
        auto it = mset.upper_bound(toRemove);
        if (it == mset.begin())
            return false;

        it--;
        mset.erase(it);
        if (!mset.empty())
        {
            it = mset.begin();
            int toInsert = (*it);
            toInsert += toRemove;
            mset.erase(it);
            mset.insert(toInsert);
        }
    }
    return true;
}

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int k, l = 0, r = n, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (isWon(a, n, mid))
            {
                k = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << k << endl;
    }
    return 0;
}