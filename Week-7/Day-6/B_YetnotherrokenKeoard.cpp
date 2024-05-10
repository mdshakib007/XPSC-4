#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        vector<int> upper, lower;

        for (int i = 0; i < n; ++i)
        {
            if(s[i] == 'B')
            {
                s[i] = ' ';
                if(!upper.empty())
                {
                    s[upper.back()] = ' ';
                    upper.pop_back();
                }
            }
            else if(s[i] == 'b')
            {
                s[i] = ' ';
                if(!lower.empty())
                {
                    s[lower.back()] = ' ';
                    lower.pop_back();
                }
            }
            else{
                if(s[i] >= 'A' && s[i] <= 'Z') upper.push_back(i);
                else lower.push_back(i);
            }
        }

        string res = "";
        for(char c : s)
        {
            if(c != ' ') res += c;
        }
        cout << res << endl;
    }
    return 0;
}