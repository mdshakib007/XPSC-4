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
        ll n, k;
        cin >> n >> k;
        vector<ll> mouse(k);
        for(int i = 0; i<k; i++) cin >> mouse[i];

        sort(mouse.begin(), mouse.end(), greater<ll>());
        ll cat_pos = 0, saved_mouse = 0;
        for(int i = 0; i<k; i++){
            if(mouse[i] > cat_pos){
                saved_mouse++;
                cat_pos += (n-mouse[i]);
            }
        }
        cout << saved_mouse << endl;
    }   
    return 0;
}