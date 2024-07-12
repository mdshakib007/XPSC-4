#include <bits/stdc++.h>
using namespace std;

void CASES()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> subs(n + 1);
    for (int i = 0; i <= n; i++)
    {
        int sum = 0, curr = 0, j = 0;
        while (j < i)
        {
            curr += a[j];
            j++;
        }
        sum = curr;
        
        int k = 0;
        while (j < n)
        {
            curr = (curr - a[k]) + a[j];
            sum = max(sum, curr);
            j++, k++;
        }
        subs[i] = sum;
    }
    
    for (int i = 0; i <= n; i++)
    { 
        int sum = 0;
        for (int j = 0; j <= n; j++)
        {
            sum = max(sum, subs[j] + (x * min(j, i)));
        }
        cout << sum << ' ';
    }
    cout << '\n';
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