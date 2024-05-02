#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int total_balloon, assistants;
    cin >> total_balloon >> assistants;
    vector<tuple<int, int, int>> IthAssistant(assistants);
    for (int i = 0; i < assistants; i++)
    {
        int timeForAballoon, canMake, rest;
        cin >> timeForAballoon >> canMake >> rest;
        IthAssistant[i] = make_tuple(timeForAballoon, canMake, rest);
    }

    vector<int> ansArr(assistants);
    auto ok = [&](int mid)
    {
        vector<int> temp(assistants);
        int has = total_balloon;
        for (int i = 0; i < assistants; i++)
        {
            int timeForAballoon, beforeRest, restTime, fullSeg, remaining, curr, can;
            tuple<int, int, int> T = IthAssistant[i];
            timeForAballoon = get<0>(T);
            beforeRest = get<1>(T);
            restTime = get<2>(T);

            fullSeg = (timeForAballoon * beforeRest) + restTime;
            can = mid / fullSeg;
            remaining = mid % fullSeg;
            curr = ((can * restTime) + min(restTime, (remaining / timeForAballoon)));
            curr = min(curr, has);
            has -= curr;
            temp[i] = curr;
        }
        if (!has)
        {
            for (int i = 0; i < assistants; i++)
            {
                ansArr[i] = temp[i];
            }
        }
        return (!has);
    };

    int l = 0, r = 1e8, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    
    cout << ans << endl;
    for (int i : ansArr)
    {
        cout << i << " ";
    }

    return 0;
}