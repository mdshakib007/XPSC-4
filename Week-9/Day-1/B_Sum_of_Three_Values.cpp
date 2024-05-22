#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    cin >> n >> target;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());
    vector<int> ans;
    bool found = false;
    for (int i = 0; i < n - 2; i++)
    {
        int need = target - arr[i].first;
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            int currSum = arr[l].first + arr[r].first;
            if (currSum == need)
            {
                ans.push_back(arr[i].second);
                ans.push_back(arr[l].second);
                ans.push_back(arr[r].second);
                found = true;
                break;
            }
            else if (currSum < need)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if (found)
            break;
    }

    if (found)
    {
        sort(ans.begin(), ans.end());
        cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << '\n';
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}