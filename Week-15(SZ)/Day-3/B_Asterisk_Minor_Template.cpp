#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    string a, b;
    cin >> a >> b;

    if (a[0] == b[0])
    {
        cout << "YES\n"
             << a[0] << "*\n";
        return;
    }
    if (a.back() == b.back())
    {
        cout << "YES\n"
             << "*" << a.back() << "\n";
        return;
    }

    for (int i = 0; i + 1 < a.size(); ++i)
    {
        for (int j = 0; j + 1 < b.size(); ++j)
        {
            if (a[i] == b[j] && a[i + 1] == b[j + 1])
            {
                cout << "YES\n*" << a[i] << a[i + 1] << "*\n";
                return;
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