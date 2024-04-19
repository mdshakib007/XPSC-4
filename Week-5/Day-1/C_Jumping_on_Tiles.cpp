#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

bool cmp1(pair<char, int> a, pair<char, int> b)
{
    return a.second < b.second;
}
bool cmp2(pair<char, int> a, pair<char, int> b)
{
    return a.first > b.first;
}
bool cmp3(pair<char, int> a, pair<char, int> b)
{
    return a.first < b.first;
}

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
        int n = s.size();

        char mn = min(s[0], s[n - 1]);
        char mx = max(s[0], s[n - 1]);
        vector<pair<char, int>> validChars;

        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= mn and s[i] <= mx))
            {
                validChars.push_back({s[i], i});
            }
        }

        sort(validChars.begin(), validChars.end(), cmp1);
        if (validChars.size() > 2)
        {
            if (s[0] > s[n - 1])
                sort(validChars.begin() + 1, validChars.begin() + validChars.size() - 1, cmp2);
            else
                sort(validChars.begin() + 1, validChars.begin() + validChars.size() - 1, cmp3);
        }

        vector<int> path = {1};
        int cost = 0;
        for (int i = 1; i < validChars.size(); i++)
        {
            cost += abs(validChars[i - 1].first - validChars[i].first);
            path.push_back(validChars[i].second + 1);
        }

        cout << cost << " " << path.size() << endl;
        for (int i : path)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
