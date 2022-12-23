#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a;
		cin >> a;
		if (a *3==180||a*4==360)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	return 0;
}