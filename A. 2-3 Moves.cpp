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
		int o = a / 2+1;
		int p = a / 3+1;
		if (a % 3 == 0)
		{
			cout << a / 3 <<endl;
		}
		else if(a==1)
		{
			cout << "2" << endl;
		}
		else
		{



			cout << min(o, p) << endl;
		}

	}
	return 0;
}