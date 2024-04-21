#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i<m; i++) cin >> b[i];

    int ways = 0;
    for(int i = 0; i<n; i++){
        int tmp = 0;
        for(int j = 0; j<m; j++){
            if(abs(a[i] - b[j]) <= 1) tmp++;
        }
        ways = max(ways, tmp);
    }
    cout << ways << endl;

    return 0;
}