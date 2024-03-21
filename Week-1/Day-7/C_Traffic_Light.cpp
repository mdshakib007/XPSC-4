#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char curr;
        cin >> n >> curr;
        string traffic_light;
        cin >> traffic_light;

        traffic_light += traffic_light;

        int ans = 0, cnt = 0, flag = 0;
        for (int i = 0; i < traffic_light.size(); i++)
        {
            if (traffic_light[i] == curr)
                flag = 1;

            if (traffic_light[i] == 'g')
            {
                ans = max(ans, cnt);
                cnt = 0;
                flag = 0;
            }
            if (flag == 1)
                cnt++;
        }
        ans = max(ans, cnt);
        cout << ans << '\n';
    }
    return 0;
}