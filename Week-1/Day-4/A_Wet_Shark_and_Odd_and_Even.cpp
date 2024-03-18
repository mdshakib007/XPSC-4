#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int minOdd = INT_MAX;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (x % 2 != 0)
            minOdd = min(minOdd, x);
    }

    if (sum % 2 != 0)
        sum -= minOdd;
    
    if(sum < 0) sum = 0;
    
    cout << sum << '\n';

    return 0;
}