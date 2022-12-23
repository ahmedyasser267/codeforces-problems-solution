#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,b,d,sum=0,c=0;
	cin >> n >> b >> d;
	while (n--)
	{
		int a;
		cin >> a;
		
		if (b < a )
		{
			continue;
		}
		else
		{
			sum += a;
		}
		if (sum > d)
		{

			sum = 0;
			c++;
		}
		
		
	}
	cout << c;

	return 0;
}