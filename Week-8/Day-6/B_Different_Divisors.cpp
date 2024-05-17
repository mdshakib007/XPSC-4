#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x == 1)
        return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

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

        int ans = 1, curr = 1;
        for (int i = 0; i < 2; i++)
        {
            curr += n;
            for (int j = curr;; j++)
            {
                if (isPrime(j))
                {
                    ans *= j;
                    curr = j;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}