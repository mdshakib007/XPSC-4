#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s >> t;

    int op = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] != t[i]) op++;
    }
    cout << op;

    return 0;
}