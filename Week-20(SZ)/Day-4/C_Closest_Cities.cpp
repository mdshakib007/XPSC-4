#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> to_right(n);
    to_right[0] = 0;
    to_right[1] = 1;
    for (int i = 2; i < n; i++)
    {
        if (a[i] - a[i - 1] < a[i - 1] - a[i - 2])
            to_right[i] = to_right[i - 1] + 1;
        else
            to_right[i] = to_right[i - 1] + (a[i] - a[i - 1]);
    }

    vector<int> to_left(n);
    to_left[n - 1] = 0;
    to_left[n - 2] = 1;
    for (int i = n - 3; i >= 0; i--)
    {
        if (a[i + 1] - a[i] < a[i + 2] - a[i + 1])
            to_left[i] = to_left[i + 1] + 1;
        else
            to_left[i] = to_left[i + 1] + (a[i + 1] - a[i]);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;

        if (l < r)
            cout << to_right[r] - to_right[l] << '\n';
        else
            cout << to_left[r] - to_left[l] << '\n';
    }
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