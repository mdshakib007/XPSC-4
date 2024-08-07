#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> &a, int x)
{
    int l = 0, r = a.size() - 1;
    while (l < r)
    {
        if (a[l] == x)
            l++;
        else if (a[r] == x)
            r--;
        else if (a[l] != a[r])
            return false;
        else
            l++, r--;
    }
    return true;
}

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;
    bool flag = true;
    while (l < r)
    {
        if (a[l] != a[r])
        {
            flag = (isPalindrome(a, a[l]) || isPalindrome(a, a[r]));
            break;
        }
        l++, r--;
    }
    if (flag)
        cout << "YES\n";
    else
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