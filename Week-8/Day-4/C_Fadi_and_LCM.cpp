#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b) * b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long ans = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && lcm(i, n / i) == n)
        {
            ans = i;
        }
    }
    cout << ans << ' ' << n / ans << '\n';

    return 0;
}