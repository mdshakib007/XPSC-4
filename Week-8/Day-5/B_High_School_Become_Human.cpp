#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    double n = x * log(y);
    double m = y * log(x);

    if (n == m)
        cout << "=";
    else if (m < n)
        cout << "<";
    else
        cout << ">";
    return 0;
}