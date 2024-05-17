#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n)
{
    vector<int> d;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                d.push_back(i);
            }
            else
            {
                d.push_back(i);
                d.push_back(n / i);
            }
        }
    }
    return d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;

        vector<int> divisor = divisors(l);

        vector<int> x, y;
        for (int i = 0; i <= 20; i++)
        {
            int pwr = pow(a, i);
            if (pwr <= 1e6)
                x.push_back(pwr);
            else
                break;
        }

        for (int i = 0; i <= 20; i++)
        {
            int pwr = pow(b, i);
            if (pwr <= 1e6)
                y.push_back(pwr);
            else
                break;
        }

        int cnt = 0;
        for (int i = 0; i < divisor.size(); i++)
        {
            bool flag = false;
            for (int j = 0; j < x.size(); j++)
            {
                for (int k = 0; k < y.size(); k++)
                {
                    if (divisor[i] * x[j] * y[k] == l)
                    {
                        cnt++;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}