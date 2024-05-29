#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    cout << 3 << '\n';
    cout << "R " << n - 1 << '\n';
    cout << "L " << n << '\n';
    cout << "L " << 2 << '\n';
    return 0;
}