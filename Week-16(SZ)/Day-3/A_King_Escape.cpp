#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int n;
bool vis[N][N];
vector<pair<int, int>> d = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {-1, -1}, {1, 1}, {-1, 1}, {1, -1}};

void DFS(int bx, int by)
{
    vis[bx][by] = true;

    for (int i = 0; i < 8; i++)
    {
        int bxx = bx + d[i].first, byy = by + d[i].second;
        if (bxx >= 1 && bxx <= n && byy >= 1 && byy <= n && !vis[bxx][byy])
        {
            vis[bxx][byy] = true;
            DFS(bxx, byy);
        }
    }
}

void CASES()
{
    cin >> n;
    int ax, ay;
    cin >> ax >> ay;
    int bx, by;
    cin >> bx >> by;
    int cx, cy;
    cin >> cx >> cy;

    for (int i = 0; i < 8; i++)
    {
        int axx = ax + d[i].first, ayy = ay + d[i].second;
        while (axx >= 1 && axx <= n && ayy >= 1 && ayy <= n)
        {
            vis[axx][ayy] = true;
            axx += d[i].first;
            ayy += d[i].second;
        }
    }

    DFS(bx, by);
    cout << (vis[cx][cy] ? "YES\n" : "NO\n");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        CASES();
    // }
    return 0;
}