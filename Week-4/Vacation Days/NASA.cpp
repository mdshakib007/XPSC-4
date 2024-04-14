#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int N = (1 << 15);
vector<int> palindromes;

void find_all_palindrome()
{
    for (int i = 0; i < N; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool palindrome = true;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                palindrome = false;
                break;
            }
        }
        if (palindrome)
            palindromes.push_back(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    find_all_palindrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(N), a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        ll ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindromes.size(); j++)
            {
                int b = (a[i] ^ palindromes[j]);
                ans += cnt[b];
            }
        }
        cout << ans/2 << endl;
    }
    return 0;
}