#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int maxTime, initTime, n;
    cin >> maxTime >> initTime >> n;
    int tools[n];
    for (int i = 0; i < n; i++)
        cin >> tools[i];

    ll seconds = initTime;
    for (int i = 0; i < n; i++)
        seconds += min(maxTime - 1, tools[i]);

    cout << seconds << '\n';
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