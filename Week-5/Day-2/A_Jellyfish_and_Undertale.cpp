#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int maxTime, initTime, n;
        cin >> maxTime >> initTime >> n;
        int tools[n];
        for (int i = 0; i < n; i++)
        {
            cin >> tools[i];
        }

        ll seconds = initTime;
        for (int i = 0; i < n; i++)
        {
            seconds += min(maxTime - 1, tools[i]);
        }
        cout << seconds << endl;
    }
    return 0;
}