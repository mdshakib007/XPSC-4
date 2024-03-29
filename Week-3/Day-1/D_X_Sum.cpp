#include <bits/stdc++.h>
#define ll long long
using namespace std;

int row, col;
const int N = 202;
int a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

bool valid(int i, int j)
{
    return (i >= 0 && i < row && j >= 0 && j < col);
}

void findSum(int i, int j, int xi, int xj, int &tmpSum)
{
    tmpSum += a[i][j];
    if (valid(i + xi, j + xj))
        findSum(i + xi, j + xj, xi, xj, tmpSum);
}

void bfs(int i, int j, int &tmpSum)
{
    tmpSum += a[i][j];

    for (int k = 0; k < 4; k++)
    {
        int ci = i + d[k].first;
        int cj = j + d[k].second;
        if (valid(ci, cj))
            findSum(ci, cj, d[k].first, d[k].second, tmpSum);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> row >> col;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                cin >> a[i][j];

        memset(vis, false, sizeof(vis));
        int ans = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int tmpSum = 0;
                if (!vis[i][j])
                {
                    vis[i][j] = true;
                    bfs(i, j, tmpSum);
                }
                ans = max(ans, tmpSum);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
