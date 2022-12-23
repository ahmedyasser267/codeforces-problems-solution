#include <bits/stdc++.h>
using namespace std;
#define ll              long long
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

	
		string s;
		cin >> s;
		
		map<char, bool>vis;
		int sum = 0;
		for (int i = 0; i <= s.length(); i++)
		{
			if (vis[s[i]])
			{
				sum++;
			}
			else
			{
				sum += 2;
				vis[s[i]] = true;
			}

		}
		cout << sum;
	}
	
	
}