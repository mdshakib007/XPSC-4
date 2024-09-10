#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
	ll n, a, b;
	cin >> n >> a >> b;
	if (a >= b)
	{
		cout << n * a << "\n";
		return;
	}
	else{
		ll m = min({n, b, (b - a)});
	cout << m * b - ((m * (m - 1)) / 2) + (n - m) * a << " \n";
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
		CASES();
	}
	return 0;
}
