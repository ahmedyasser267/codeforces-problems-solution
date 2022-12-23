#include <bits/stdc++.h>
using namespace std;
int main()
{
	double n, h, k,sum=0,res=0, sum2 = 0;
	cin >> n >> h >> k;
	while (n--)
	{
		int a;
		cin >> a;
		sum2 =round( a / k);
		res += sum2;
		sum += a;
	
		
	}
	if (h * k > sum)
	{
		cout << double(round(res));
	}
	else
	{
		cout <<(sum / n) * 2;
	}
	

	return 0;
}