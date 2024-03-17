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
        int n;
        cin >> n;
        vector<string> person1, person2, person3;

        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                if (i == 1)
                    person1.push_back(s);
                else if (i == 2)
                    person2.push_back(s);
                else
                    person3.push_back(s);
            }
        }

        map<string, int> mp1, mp2, mp3;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mp1[person1[j]]++;
                mp2[person2[j]]++;
                mp3[person3[j]]++;
            }
        }
        int a = 0, b = 0, c = 0;
        for (pair<string, int> pr : mp1)
        {
            if (mp2.find(pr.first) == mp2.end() && mp3.find(pr.first) == mp3.end())
                a += 3;
            else if (mp2.find(pr.first) != mp2.end() && mp3.find(pr.first) != mp3.end())
                continue;
            else
                a++;
        }
        for (pair<string, int> pr : mp2)
        {
            if (mp1.find(pr.first) == mp1.end() && mp3.find(pr.first) == mp3.end())
                b += 3;
            else if (mp1.find(pr.first) != mp1.end() && mp3.find(pr.first) != mp3.end())
                continue;
            else
                b++;
        }
        for (pair<string, int> pr : mp3)
        {
            if (mp2.find(pr.first) == mp2.end() && mp1.find(pr.first) == mp1.end())
                c += 3;
            else if (mp2.find(pr.first) != mp2.end() && mp1.find(pr.first) != mp1.end())
                continue;
            else
                c++;
        }
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}