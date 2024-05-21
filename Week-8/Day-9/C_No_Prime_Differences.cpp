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
        int row, col;
        cin >> row >> col;

        int arr[row + 1][col + 1];
        int k = 1;
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                arr[i][j] = k;
                k++;
            }
        }

        for (int i = 2; i <= row; i += 2)
        {
            for (int j = 1; j <= col; j++)
            {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }

        for (int i = 1; i <= row; i += 2)
        {
            for (int j = 1; j <= col; j++)
            {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}