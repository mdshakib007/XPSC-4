#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "=\n";
            continue;
        }

        if (a.back() == 'S')
        {
            if (b.back() == 'S')
            {
                if (a.size() < b.size())
                    cout << ">";
                else
                    cout << "<";
            }
            else
                cout << "<";
        }

        else if (a.back() == 'M')
        {
            if (b.back() == 'S')
                cout << ">";
            else if (b.back() == 'L')
                cout << "<";
            else
            {
                if (a.size() < b.size())
                    cout << "<";
                else
                    cout << ">";
            }
        }

        else if (a.back() == 'L')
        {
            if (b.back() != 'L')
                cout << ">";
            else
            {
                if (a.size() < b.size())
                    cout << "<";
                else
                    cout << ">";
            }
        }
        cout << "\n";
    }
    return 0;
}
