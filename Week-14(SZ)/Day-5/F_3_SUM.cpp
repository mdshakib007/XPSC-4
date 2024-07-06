#include <bits/stdc++.h>
using namespace std;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x %= 10;
        if (freq[x] < 3)
            a.push_back(x);
        freq[x]++;
    }

    int m = a.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if ((a[i] + a[j] + a[k]) % 10 == 3)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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
