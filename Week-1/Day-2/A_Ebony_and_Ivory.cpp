#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= c){
        if(b <= c){
            if(a + (b*2) <= c) cout << "Yes\n";
            else cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
    }
    else if(b <= c){
        if(b*2 <= c) cout << "Yes\n";
        else cout << "No\n";
    }
    else cout << "No\n";
    return 0;
}