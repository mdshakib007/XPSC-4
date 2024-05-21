#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        for(int i = 0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }

        long long ans = 1, curr = 0;
        for(int i = 0; i<n-1; i++){
            curr += a[i];
            sum -= a[i];

            ans = max(__gcd(sum, curr), ans);
        }
        cout << ans << '\n';
    }
    return 0;
}