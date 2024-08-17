#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    string s;
    cin >> s;

    string a, b;
    a += s[0];
    int i = 1;
    while (i < s.size() && s[i] == '0')
    {
        a += s[i];
        i++;
    }

    while (i < s.size())
    {
        b += s[i];
        i++;
    }

    if (!b.empty() && stoi(a) < stoi(b))
        cout << a << ' ' << b << '\n';
    else
        cout << "-1\n";
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