#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds1 = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using pbds2 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    pbds1<ll> p1;
    pbds2<ll> p2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        p1.insert(a[i]);
        b[i] = p1.order_of_key(a[i]);
    }

    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        p2.insert(a[i]);
        ans += (p2.order_of_key(a[i]) * b[i]);
    }

    cout << ans << endl;
}