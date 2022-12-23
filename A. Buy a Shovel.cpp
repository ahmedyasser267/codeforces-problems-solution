#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r, k,c=0,sum=0;
	cin >> k >> r;
	while (true)
	{
		c++;
		sum = c * k;
		if (sum%10==0||sum%10==r)
		{
			break;

		}
	
	}
	cout << c;
	
}