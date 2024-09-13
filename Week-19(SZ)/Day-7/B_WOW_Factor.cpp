#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
	string s;
	cin >> s;

	vector<ll> front(s.size()), back(s.size());
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == 'v' && s[i - 1] == 'v')
			front[i] = front[i - 1] + 1;
		else
			front[i] = front[i - 1];
	}

	for (int i = s.size() - 2; i >= 0; i--)
	{
		if (s[i] == 'v' && s[i + 1] == 'v')
			back[i] = back[i + 1] + 1;
		else
			back[i] = back[i + 1];
	}

	ll ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'o')
			ans += (front[i] * back[i]);
	}

	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// int t;
	//    cin >> t;
	//    while (t--)
	//    {
	CASES();
	//    }
	return 0;
}
