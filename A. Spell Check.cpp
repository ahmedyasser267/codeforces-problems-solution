#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	char a[200];
	cin >> t;
	
	while (t--)
	{
		int n;
		cin >> n;
	
 
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		string s2 = "Timur";
		sort(s2.begin(), s2.end());
		if (s2 == s)
		{
			cout << "YES"<<endl;
			}
		else
		{
			cout << "NO" << endl;
		}
		

	}

	
}