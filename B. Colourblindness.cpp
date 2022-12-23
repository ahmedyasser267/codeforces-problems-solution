#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int t2;
	cin >> t2;
	string a, b;
	cin >> a >> b;
	if (a.size() != b.size())
	{
		cout << "NO" << endl;
		return;
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == b[i] || (a[i] = 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G'))
		{
			continue;
		}
		
			
		
		else
		{
			cout << "NO" << endl;
			return;
		}

	}
	cout << "YES"<<endl;
	

}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}