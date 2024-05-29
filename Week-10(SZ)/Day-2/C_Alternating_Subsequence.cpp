#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll i = 0, sum = 0;
        while (i < n)
        {
            if (a[i] >= 0)
            {
                ll mx = LLONG_MIN;
                while(a[i] >= 0 && i < n){
                    mx = max(mx, a[i]);
                    i++;
                }
                if(mx != LLONG_MIN) sum += mx;
            }
            if(a[i] < 0){
                ll mx = LLONG_MIN;
                while(a[i] < 0 && i < n){
                    mx = max(mx, a[i]);
                    i++;
                }
                if(mx != LLONG_MIN) sum += mx;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}