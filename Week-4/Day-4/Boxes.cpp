#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<ll>());
        priority_queue<ll> pq;
        pq.push(v[0]);

        for (ll i = 1; i < n; i++)
        {
            if (pq.top() >= v[i])
            {
                ll k = pq.top() ^ v[i];
                pq.pop();
                pq.push(k);
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout << pq.size() << endl;
    }
    return 0;
}