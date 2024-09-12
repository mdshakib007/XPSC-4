#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void CASES()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int ones = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
			ones++;
	}

	if (ones == n)
		cout << "NO\n";
	else
		cout << "YES\n";
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
