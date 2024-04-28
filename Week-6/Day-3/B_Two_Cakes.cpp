#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    int minPis = min(a, b);
    int max_x = 0;

    for (int i = 1; i <= minPis; i++)
    {
        int pisA = min(a / i, n);
        int pisB = min(b / i, n);
        if (pisA + pisB >= n)
        {
            max_x = i;
        }
        else
        {
            break;
        }
    }
    cout << max_x << endl;
    return 0;
}