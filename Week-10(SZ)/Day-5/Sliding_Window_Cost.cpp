#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    pbds<ll> p;
    for (int i = 0; i < k; i++)
        p.insert(a[i]);

    ll old_med = 0, cost = 0, median = 0;

    old_med = *p.find_by_order((k + 1) / 2 - 1);
    for (int i = 0; i < k; i++)
    {
        cost += abs(a[i] - old_med);
    }
    cout << cost << " ";

    for (int i = 0; i < n - k; i++)
    {
        p.erase(p.find_by_order(p.order_of_key(a[i])));
        p.insert(a[i + k]);
        median = *p.find_by_order((k + 1) / 2 - 1);
        cost += (abs(a[i + k] - median) - abs(a[i] - old_med));

        if (k % 2 == 0)
            cost -= (median - old_med);
        old_med = median;
        cout << cost << " ";
    }

    return 0;
}