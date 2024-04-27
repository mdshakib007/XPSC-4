#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n, w;
        cin >> n >> w;
        vector<ll> a(n);
        for(int i = 0;i<n; i++) cin >> a[i];

        ll l = 0, r = 2e9, mid, ans;
        while(l<=r){
            mid = (l+r)/2;
            ll total = 0;
            for(int i = 0; i<n; i++){
                total += max(mid-a[i], 0LL);
            }
            if(total <= w){
                ans = mid;
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}