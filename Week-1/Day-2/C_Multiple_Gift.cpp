#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long x, y;
    cin >> x >> y;
    long long ans = 0;
    while (x <= y) {
        x *= 2;
        ans++;
    }
    cout << ans;
    return 0;
}
