#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int notSame = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            notSame = i;
            break;
        }
    }

    if (notSame == -1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            cout << 1 << ' ' << i + 1 << '\n';
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[i] == a[0]) {
            cout << notSame + 1 << ' ' << i + 1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
