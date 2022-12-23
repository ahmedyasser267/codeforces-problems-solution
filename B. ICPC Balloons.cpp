#include <bits/stdc++.h>
using namespace std;
int main()
{
	//1----2
	//1----1
	//3
	///ABA
	//2 2 1=5
	//SUM=0
	int t;
	cin >> t;
	while (t--)

	{
		int L;
		cin >> L;
		string s;
		cin >> s;
		//key----value A ----- yes/no
		map<char, bool>vis;
		int sum = 0;
		for (int i = 0; i <= L-1; i++)
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