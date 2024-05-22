#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> ticketPrice(n), customer(m);
    for (int i = 0; i < n; i++)
        cin >> ticketPrice[i];
    for (int i = 0; i < m; i++)
        cin >> customer[i];

    sort(ticketPrice.begin(), ticketPrice.end());
    multiset<int> ticket(ticketPrice.begin(), ticketPrice.end());

    for (int i = 0; i < m; i++)
    {
        int maxCan = customer[i];
        auto toPay = ticket.upper_bound(maxCan);
        if (toPay == ticket.begin())
        {
            cout << -1 << '\n';
        }
        else
        {
            toPay--;
            cout << *toPay << '\n';
            ticket.erase(toPay);
        }
    }
    return 0;
}