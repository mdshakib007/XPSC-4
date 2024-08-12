#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int cnt = 0;
        long long sum = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            int x = arr[i];
            sum += abs(x);
            
            if(x < 0 && flag == false){
                cnt++;
                flag = true;
            }
            if(x > 0) flag = false;
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}