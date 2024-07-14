#include <bits/stdc++.h>
using namespace std;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    map<int, vector<int>> idx;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        idx[a[i]].push_back(i);
    }

    bool possible = true;
    for (int i = 1; i <= n; i++)
    {
        if (idx[a[i]].size() > 2)
        {
            possible = false;
            break;
        }
    }
    if (!possible)
    {
        cout << "NO\n";
        return;
    }

    vector<int> p(n + 1, -1), q(n + 1, -1);
    multiset<int> remP, remQ;
    for (int i = 1; i <= n; i++)
    {
        remP.insert(i);
        remQ.insert(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (idx[i].empty())
            continue;
        if (idx[i].size() == 1)
        {
            p[idx[i][0]] = i;
            remP.erase(remP.find(i));
        }
        else if (idx[i].size() == 2)
        {
            p[idx[i][0]] = i;
            remP.erase(remP.find(i));
            q[idx[i][1]] = i;
            remQ.erase(remQ.find(i));
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (p[i] == -1 and q[i] == -1)
        {
            auto pi = remP.end();
            pi--;
            p[i] = *pi;
            remP.erase(pi);
            auto qi = remQ.end();
            qi--;
            q[i] = *qi;
            remQ.erase(qi);
        }
        else if (p[i] == -1)
        {
            if (remP.empty())
            {
                possible = false;
                break;
            }
            auto x = remP.upper_bound(q[i]);
            if (x == remP.begin())
            {
                possible = false;
                break;
            }
            x--;
            p[i] = *x;
            remP.erase(x);
        }
        else if (q[i] == -1)
        {
            if (remQ.empty())
            {
                possible = false;
                break;
            }
            auto x = remQ.upper_bound(p[i]);
            if (x == remQ.begin())
            {
                possible = false;
                break;
            }
            x--;
            q[i] = *x;
            remQ.erase(x);
        }
    }

    if (!possible)
    {
        cout << "NO" << '\n';
        return;
    }

    cout << "YES" << '\n';
    for (int i = 1; i <= n; i++)
        cout << p[i] << " ";
    cout << '\n';

    for (int i = 1; i <= n; i++)
        cout << q[i] << " ";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        CASES();
    }
    return 0;
}