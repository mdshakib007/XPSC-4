#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << "YES\n";
        return;
    }

    bool possible = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            a[i + 1] += a[i];
            a[i] = 0;
        }
        else
        {
            if (a[i] <= a[i - 1])
            {
                possible = false;
                break;
            }
            else
            {
                ll diff = a[i] - (a[i - 1] + 1);
                a[i] = a[i - 1] + 1;
                a[i + 1] += diff;
            }
        }
    }
    for(int i = 0; i<n-1; i++){
        if(a[i] >= a[i+1]){
            possible = false;
            break;
        }
    }

    if (possible)
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