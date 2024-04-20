#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int diffA = abs(a-1);
        int diffB = abs(b-c);
        diffB += c-1;
        if(diffA < diffB) cout << 1 << endl;
        else if(diffA > diffB) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}