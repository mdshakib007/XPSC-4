#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    if(s.size() != t.size()){
        cout << "NO\n";
        return 0;
    }

    for(int i = 0; i<s.size(); i++){
        if(isVowel(s[i]) != isVowel(t[i])) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}