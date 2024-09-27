#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int l = 0, r = 1e9;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] == a[i + 1])
			continue;
		else if (a[i] < a[i + 1])
		{
			int x = (a[i] + a[i + 1]) / 2;
			r = min(r, x);
		}
		else 
		{
			int x = (a[i] + a[i + 1] + 1) / 2;
			l = max(l, x);
		}
	}
	
	if(r >= l) cout << r << "\n";
	else cout << -1 << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		CASES();
	}
	return 0;
}
