#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    
    vector<pair<ll,ll>> op(c), seg(c);
    ll curr = n;
    for(ll i = 0; i<c; i++) {
        ll l,r ;
        cin >> l >> r;
        op[i] = {l, r};
        seg[i] = {curr+1, curr+(r-l+1)};
        curr = seg[i].second;
    }

    while(q--){
        ll idx;
        cin >> idx;

        if(idx <= n) {
            cout << s[idx-1] << '\n';
            continue;
        }

        for(ll i = c-1; i>=0; i--){
            if(idx >= seg[i].first && idx <= seg[i].second){
                idx = op[i].first + (idx-seg[i].first);
            }
        }
        cout << s[idx-1] << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        CASES();
    }
    return 0;
}