#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int left, right;
    cin >> left >> right;
    if (left >= right)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << right - left + 1 << '\n';
    }
    return 0;
}