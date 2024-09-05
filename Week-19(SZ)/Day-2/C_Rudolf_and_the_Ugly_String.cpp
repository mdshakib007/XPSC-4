#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0, j = 1, k = 2, op = 0;
    while (k < n)
    {
        if (s[i] == 'm' && s[j] == 'a' && s[k] == 'p')
        {
            if (k + 2 < n && s[i + 2] == 'p' && s[j + 2] == 'i' && s[k + 2] == 'e')
            {
                op++;
                i += 3, j += 3, k += 3;
            }
            else
            {
                i++, j++, k++;
                op++;
            }
        }
        else if (s[i] == 'p' && s[j] == 'i' && s[k] == 'e')
        {
            i++, j++, k++;
            op++;
        }
        else{
            i++, j++, k++;
        }
    }

    cout << op << '\n';
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