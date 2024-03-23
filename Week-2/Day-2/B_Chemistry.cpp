#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int freq[26] = {0};
        for(char c : s)
        {
            freq[c-'a']++;
        }

        int x = 0;
        for(int i = 0; i<26; i++){
            if(freq[i] % 2 != 0) x++;
        }
        if(x-1 <= k) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}