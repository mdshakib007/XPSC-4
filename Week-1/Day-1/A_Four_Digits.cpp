#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> ans(4, 0);
    int i = 3;
    while(n > 0){
        int mod = n%10;
        ans[i] = mod;
        i--;
        n /= 10;
    }
    for(int i : ans) cout << i;
    return 0;
}