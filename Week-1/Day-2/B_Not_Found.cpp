#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin >> str;
    int freq[26] = {0};
    for(char c : str){
        freq[c-'a']++;
    }

    for(int i = 0; i<26; i++){
        if(freq[i] == 0){
            cout << char(i+'a');
            return 0;
        }
    }
    cout << "None";
    return 0;
}