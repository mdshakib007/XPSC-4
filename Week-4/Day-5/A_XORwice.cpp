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
        int a, b;
        cin >> a >> b;
        int x = a & b;
        int ans = (a ^ x) + (b ^ x);
        cout << ans << endl;
    }
    return 0;
}