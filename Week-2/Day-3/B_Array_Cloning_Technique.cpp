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
        map<int, int> freq;
        int max_freq = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            freq[num]++;
            max_freq = max(max_freq, freq[num]);
        }
        int diff = n - max_freq;
        int x = 0;
        while (max_freq < n)
        {
            max_freq *= 2;
            x++;
        }
        cout << diff + x << "\n";
    }
    return 0;
}
