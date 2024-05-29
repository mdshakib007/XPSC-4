#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.second == b.second)
        {
            return a.first > b.first;
        }
        else
        {
            return a.second < b.second;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool deleted[N] = {false};
    queue<int> type2;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> type3;
    int q, cusNum = 0;
    cin >> q;
    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int canPay;
            cin >> canPay;
            cusNum++;

            type2.push(cusNum);
            type3.push({cusNum, canPay});
        }
        else if (op == 2)
        {
            int id = type2.front();
            while (deleted[id]){
                type2.pop();
                id = type2.front();
            }

            deleted[id] = true;
            cout << id << " ";
        }
        else
        {
            int id = type3.top().first;
            while (deleted[id]){
                type3.pop();
                id = type3.top().first;
            }

            deleted[id] = true;
            cout << id << " ";
        }
    }
    cout << '\n';
    // while (!type3.empty())
    // {
    //     auto pr = type3.top();
    //     cout << pr.first << " " << pr.second << endl;
    //     type3.pop();
    // }
    return 0;
}