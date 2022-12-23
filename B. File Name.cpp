#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin >> l;
	
	


		string s;
		cin >> s;

		int ans = 0;
		for (int i = 0; i < l; i++)
		{
			if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
				ans++;

		}
		cout << ans;

	return 0;
}